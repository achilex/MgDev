<?xml version="1.0" encoding="utf-16"?>
<!--
TODO:
 - Split off FDO into a separate package
-->
<package xmlns="http://schemas.microsoft.com/packaging/2012/06/nuspec.xsd">
    <metadata>
        <id>mg-desktop-MG_CPU</id>
        <version>MG_VERSION</version>
        <title>MapGuide Desktop API (MG_CPU)</title>
        <authors>Jackie Ng</authors>
        <owners />
        <licenseUrl>http://www.gnu.org/licenses/lgpl-2.1.txt</licenseUrl>
        <projectUrl>http://trac.osgeo.org/mapguide/wiki/mg-desktop</projectUrl>
        <requireLicenseAcceptance>true</requireLicenseAcceptance>
        <description>MapGuide Desktop API for .net. This package includes the FDO (Feature Data Objects) data access libraries. This wraps the MG_CPU unmanaged binaries of mg-desktop.
        
This package replaces the mg-desktop-net40-MG_CPU package. That package still exists and should be considered a legacy package.

Supported Platforms:
- .NET Framework 4.0 and above</description>
        <language>en-US</language>
        <tags>MapGuide GIS Geospatial Maps</tags>
        <dependencies>
            <dependency id="mapguide-api-base-MG_CPU" version="MG_VERSION" />
        </dependencies>
    </metadata>
</package>