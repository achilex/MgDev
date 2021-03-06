<?xml version="1.0" encoding="utf-16"?>
<package xmlns="http://schemas.microsoft.com/packaging/2012/06/nuspec.xsd">
    <metadata>
        <id>mg-desktop-viewer-MG_CPU</id>
        <version>MG_VERSION</version>
        <title>MapGuide Desktop API Viewer Components (MG_CPU)</title>
        <authors>Jackie Ng</authors>
        <owners />
        <licenseUrl>http://www.gnu.org/licenses/lgpl-2.1.txt</licenseUrl>
        <projectUrl>http://trac.osgeo.org/mapguide/wiki/mg-desktop</projectUrl>
        <requireLicenseAcceptance>true</requireLicenseAcceptance>
        <description>Windows Forms Viewer Component for the MG_CPU version of mg-desktop

This package replaces the mg-desktop-viewer-net40-MG_CPU package. That package still exists and should be considered a legacy package.

Supported Platforms:
- .NET Framework 4.0 and above</description>
        <language>en-US</language>
        <tags>MapGuide GIS Geospatial WinForms Maps</tags>
        <frameworkAssemblies>
            <frameworkAssembly assemblyName="System.Windows.Forms" targetFramework="" />
            <frameworkAssembly assemblyName="System.Drawing" targetFramework="" />
        </frameworkAssemblies>
        <dependencies>
            <dependency id="mg-desktop-MG_CPU" version="MG_VERSION" />
        </dependencies>
    </metadata>
</package>