<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<%--
Copyright (C) 2004-2011 by Autodesk, Inc.
This library is free software; you can redistribute it and/or
modify it under the terms of version 2.1 of the GNU Lesser
General Public License as published by the Free Software Foundation.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
--%>

<%@ Page language="c#" %>
<%@ Import Namespace="System" %>
<%@ Import Namespace="System.Collections.Specialized" %>
<%@ Import Namespace="System.IO" %>
<%@ Import Namespace="OSGeo.MapGuide" %>

<script runat="server">
String sessionId;
String mapName;
</script>
<!-- #Include File="../common/common.aspx" -->
<html>

  <head>
    <title>Viewer Sample Application - Query Parcels</title>
    <meta content="text/html; charset=utf-8" http-equiv="Content-Type">
    <meta http-equiv="content-script-type" content="text/javascript" />
    <meta http-equiv="content-style-type" content="text/css" />
    <link href="../styles/globalStyles.css" rel="stylesheet" type="text/css">
    <link href="../styles/otherStyles.css" rel="stylesheet" type="text/css">
  </head>

  <body class="AppFrame">

    <h1 class="AppHeading">Feature Query</h1>

    <%
    
    sessionId = Request.Params["SESSION"];
    mapName = Request.Params["MAPNAME"];

    try
    {

      // Initialize the Web Extensions and connect to
      // the Server using the Web Extensions session
      // identifier stored in PHP session state.

      MapGuideApi.MgInitializeWebTier(Constants.WebConfigPath);

      MgUserInformation userInfo = new MgUserInformation(sessionId);
      MgSiteConnection siteConnection = new MgSiteConnection();
      siteConnection.Open(userInfo);

      MgMap map = new MgMap(siteConnection);
      map.Open(mapName);

      // Get the geometry for the boundaries of District 6

      MgFeatureQueryOptions districtQuery = new MgFeatureQueryOptions();
      districtQuery.SetFilter("ID = '6'");

      MgLayerBase layer = map.GetLayers().GetItem("Districts");
      MgFeatureReader featureReader = layer.SelectFeatures(districtQuery);
      MgByteReader districtGeometryData = null;
      try {
        featureReader.ReadNext();
        districtGeometryData = featureReader.GetGeometry(layer.GetFeatureGeometryName());
      } finally { //Ensures this block is always run
        featureReader.Close();
      }

      // Convert the AGF binary data to MgGeometry.

      MgAgfReaderWriter agfReaderWriter = new MgAgfReaderWriter();
      MgGeometry districtGeometry = agfReaderWriter.Read(districtGeometryData);

      // Create a filter to select the desired features.
      // Combine a basic filter and a spatial filter.

      MgFeatureQueryOptions queryOptions = new MgFeatureQueryOptions();
      queryOptions.SetFilter("RNAME LIKE 'SCHMITT%'");

      queryOptions.SetSpatialFilter("SHPGEOM", districtGeometry, MgFeatureSpatialOperations.Inside);

      // Select the features.

      layer = map.GetLayers().GetItem("Parcels");
      featureReader = layer.SelectFeatures(queryOptions);

      // For each selected feature, display the address.

      Response.Write("<p>Properties owned by Schmitt ");
      Response.Write("in District 6</p><p>");

      try {
        while (featureReader.ReadNext())
        {
            String val = featureReader.GetString("RPROPAD");
            Response.Write( val + "<br />");
        }
      } finally { //Ensures this block is always run
        featureReader.Close();
      }
      Response.Write("</p>");
    }
    catch (MgException e)
    {
      Response.Write(e.GetExceptionMessage());
      Response.Write(e.GetDetails());
    }
    catch (Exception e)
    {
      Response.Write(e.Message);
    }
    %>
  </body>
</html>