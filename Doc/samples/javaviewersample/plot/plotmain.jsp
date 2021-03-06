<%--
  -Copyright (C) 2004-2006  Autodesk, Inc.
  -This library is free software; you can redistribute it and/or
  -modify it under the terms of version 2.1 of the GNU Lesser
  -General Public License as published by the Free Software Foundation.

  -This library is distributed in the hope that it will be useful,
  -but WITHOUT ANY WARRANTY; without even the implied warranty of
  -MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  -Lesser General Public License for more details.

  -You should have received a copy of the GNU Lesser General Public
  -License along with this library; if not, write to the Free Software
  -Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
--%>

<%@ page import="org.osgeo.mapguide.*" %>
<%@ page import="java.util.*" %>
<%@ page import="java.io.*" %>
<%@ page import="java.text.*" %>
<%@ page import="javax.servlet.jsp.*" %>
<%@ page import="javax.servlet.http.*" %>
<%@ include file ="../utilityfunctions.jsp" %>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>

<head>
    <title>Plot Task</title>
    <meta content="text/html; charset=utf-8" http-equiv="Content-Type">
    <link rel="stylesheet" href="../styles/gt.css" type="text/css">
    
    <script language="javascript">
    function Submit()
    {
        var plotForm = document.getElementById("plotForm");
        var scaleValue = document.getElementById("scaleValue");
        var useLayoutValue = document.getElementById("useLayoutValue");
        var useLayoutSelect = document.getElementById("useLayoutSelect");
        if(useLayoutSelect.checked)
            useLayoutValue.value = "true";
        else
            useLayoutValue.value = "false";
        
        scaleValue.value = "0";
        plotForm.submit();	
    }
    function SubmitAtScale()
    {
        var plotForm = document.getElementById("plotForm");
        var scaleValue = document.getElementById("scaleValue");
        var scaleSelect = document.getElementById("scaleSelect");
        var useLayoutValue = document.getElementById("useLayoutValue");
        var useLayoutAtScale = document.getElementById("useLayoutAtScale");
        if(useLayoutAtScale.checked)
            useLayoutValue.value = "true";
        else
            useLayoutValue.value = "false";
        
        scaleValue.value = scaleSelect.value;
        plotForm.submit();
    }
    </script>
</head>

<body>

<%
    // Display a couple of forms prompting the user to either
    // plot the current view of the map, or the current view of
    // the map at a specified scale. Submitting one of these forms
    // opens a new window containing an EPlot DWF. The EPlot DWF
    // is generated by the plot.jsp script.

    String mgSessionId = request.getParameter("SESSION");
    double currentScale = 0;
    NumberFormat nf = NumberFormat.getInstance();
    nf.setMaximumFractionDigits(3);
    MgPoint viewCenter = null;
    double viewScale = 0;

    try
    {
        // Initialize the web-tier and connect to the Site using
        // the session identifier stored in JSP session state.

        InitializeWebTier();

        MgUserInformation userInfo = new MgUserInformation(mgSessionId);
        MgSiteConnection siteConnection = new MgSiteConnection();
        siteConnection.Open(userInfo);

        // Create a ResourcService object and use it to open the Map
        // object from the sessions repository. Use the Map object to
        // determine the current scale of the map for display on this
        // page.

        MgMap map = new MgMap(siteConnection);
        map.Open("Sheboygan");

        viewCenter = map.GetViewCenter();
        viewScale = map.GetViewScale();
    }
    catch (MgException e)
    {
        out.write(e.GetExceptionMessage());
        out.write(e.GetDetails());
        return;
    }
%>

<form id="plotForm" action="plot.jsp" method="get" target="_blank">
    <input name="SESSION" type="hidden" value="<%= mgSessionId %>">
    <input name="Scale" id="scaleValue" type="hidden" value="0">
    <input name="UseLayout" id="useLayoutValue" type="hidden" value="false">
</form>

<table class="RegText" border="0" cellspacing="0" width="100%">
    <tr><td class="Title">&nbsp;Plot as DWF<hr></td></tr>
    <tr><td class="SubTitle">Plot a View of the Map</td></tr>
    <tr><td>View Center X:  <%= nf.format(viewCenter.GetCoordinate().GetX()) %></td></tr>
    <tr><td>View Center Y:  <%= nf.format(viewCenter.GetCoordinate().GetY()) %></td></tr>
    <tr><td class=\"Spacer\"></td></tr>
    <tr><td class=\"Spacer\"></td></tr>
    <tr><td>View Scale:     1:<%= nf.format((int)viewScale) %><hr></td></tr>
    
    <tr><td class="SubTitle">Plot the Current Map View</td></tr>
    <tr><td class=\"Spacer\"></td></tr>
    <tr><td class=\"Spacer\"></td></tr>
    <tr>
        <td>
            <input class="Ctrl" type="button" onClick="Submit()" value="Plot" style="width:60px">
        </td>
    </tr>
    <tr>
        <td>
            <input class="Ctrl" type="checkbox" id="useLayoutSelect">&nbsp;Use Print Layout<hr>
        </td>
    </tr>
    
    <tr><td class="SubTitle">Plot at a Specified Scale</td></tr>
    <tr><td class=\"Spacer\"></td></tr>
    <tr><td class=\"Spacer\"></td></tr>
    <tr>
        <td>
            Scale:
            <select size="1" class="Ctrl" id="scaleSelect" style="width:80px">
                <option value="1000">1:1,000</option>
                <option value="8000">1:8,000</option>
                <option value="20000">1:20,000</option>
                <option value="25000">1:25,000</option>
            </select>
        </td>
    </tr>
    <tr>
        <td>
            <input class="Ctrl" type="button" onClick="SubmitAtScale()" value="Plot" style="width:60px">
        </td>
    </tr>
    <tr>
        <td>
            <input class="Ctrl" type="checkbox" id="useLayoutAtScale">&nbsp;Use Print Layout
        </td>
    </tr>
</table>

</body>

</html>
