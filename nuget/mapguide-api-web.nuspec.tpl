<?xml version="1.0" encoding="utf-16"?>
<!--
TODO:
 - Make CS-Map dictionaries a separate package? Is content-only packages a bad practice?
-->
<package xmlns="http://schemas.microsoft.com/packaging/2012/06/nuspec.xsd">
    <metadata>
        <id>mapguide-api-web-MG_CPU</id>
        <version>MG_VERSION</version>
        <title>MapGuide Web Extensions API (MG_CPU)</title>
        <authors>Jackie Ng</authors>
        <owners />
        <licenseUrl>http://www.gnu.org/licenses/lgpl-2.1.txt</licenseUrl>
        <projectUrl>http://mapguide.osgeo.org</projectUrl>
        <requireLicenseAcceptance>true</requireLicenseAcceptance>
        <description>MapGuide Web Extensions API components. Contains the MapGuideCommon and WebApp parts of the MapGuide API

Supported Platforms:
- .NET Framework 4.0 and above</description>
        <language>en-US</language>
        <tags>MapGuide GIS Geospatial Maps</tags>
        <dependencies>
            <dependency id="mapguide-api-base-MG_CPU" version="MG_VERSION" />
        </dependencies>
    </metadata>
</package>