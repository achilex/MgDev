<?xml version="1.0" encoding="utf-8"?>
<FeatureSource xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema" xsi:noNamespaceSchemaLocation="FeatureSource-1.0.0.xsd">
  <Provider>OSGeo.SDF</Provider>
  <Parameter>
    <Name>File</Name>
    <Value>%MG_DATA_FILE_PATH%UnsortableLeft.sdf</Value>
  </Parameter>
  <Extension>
    <AttributeRelate>
      <RelateProperty>
        <FeatureClassProperty>ID</FeatureClassProperty>
        <AttributeClassProperty>ID</AttributeClassProperty>
      </RelateProperty>
      <AttributeClass>Default:Parcels</AttributeClass>
      <ResourceId>Library://UnitTests/Data/UnsortableRight.FeatureSource</ResourceId>
      <Name>DATA</Name>
      <RelateType>LeftOuter</RelateType>
      <ForceOneToOne>true</ForceOneToOne>
    </AttributeRelate>
    <Name>ParcelsLeftOuterOneToOneNestedLoops</Name>
    <FeatureClass>Default:ParcelFeatures</FeatureClass>
  </Extension>
  <Extension>
    <AttributeRelate>
      <RelateProperty>
        <FeatureClassProperty>ID</FeatureClassProperty>
        <AttributeClassProperty>ID</AttributeClassProperty>
      </RelateProperty>
      <AttributeClass>Default:Parcels</AttributeClass>
      <ResourceId>Library://UnitTests/Data/UnsortableRight.FeatureSource</ResourceId>
      <Name>DATA</Name>
      <RelateType>Inner</RelateType>
      <ForceOneToOne>true</ForceOneToOne>
    </AttributeRelate>
    <Name>ParcelsInnerOneToOneNestedLoops</Name>
    <FeatureClass>Default:ParcelFeatures</FeatureClass>
  </Extension>
  <Extension>
    <AttributeRelate>
      <RelateProperty>
        <FeatureClassProperty>ID</FeatureClassProperty>
        <AttributeClassProperty>ID</AttributeClassProperty>
      </RelateProperty>
      <AttributeClass>Default:Parcels</AttributeClass>
      <ResourceId>Library://UnitTests/Data/UnsortableRight.FeatureSource</ResourceId>
      <Name>DATA</Name>
      <RelateType>LeftOuter</RelateType>
      <ForceOneToOne>false</ForceOneToOne>
    </AttributeRelate>
    <Name>ParcelsLeftOuterNestedLoops</Name>
    <FeatureClass>Default:ParcelFeatures</FeatureClass>
  </Extension>
  <Extension>
    <AttributeRelate>
      <RelateProperty>
        <FeatureClassProperty>ID</FeatureClassProperty>
        <AttributeClassProperty>ID</AttributeClassProperty>
      </RelateProperty>
      <AttributeClass>Default:Parcels</AttributeClass>
      <ResourceId>Library://UnitTests/Data/UnsortableRight.FeatureSource</ResourceId>
      <Name>DATA</Name>
      <RelateType>Inner</RelateType>
      <ForceOneToOne>false</ForceOneToOne>
    </AttributeRelate>
    <Name>ParcelsInnerNestedLoops</Name>
    <FeatureClass>Default:ParcelFeatures</FeatureClass>
  </Extension>
  
  <Extension>
    <AttributeRelate>
      <RelateProperty>
        <FeatureClassProperty>ID</FeatureClassProperty>
        <AttributeClassProperty>ID</AttributeClassProperty>
      </RelateProperty>
      <AttributeClass>Default:Parcels</AttributeClass>
      <ResourceId>Library://UnitTests/Data/SortableRight.FeatureSource</ResourceId>
      <Name>DATA</Name>
      <RelateType>LeftOuter</RelateType>
      <ForceOneToOne>true</ForceOneToOne>
    </AttributeRelate>
    <Name>ParcelsLeftOuterOneToOneBatchSortedBlock</Name>
    <FeatureClass>Default:ParcelFeatures</FeatureClass>
  </Extension>
  <Extension>
    <AttributeRelate>
      <RelateProperty>
        <FeatureClassProperty>ID</FeatureClassProperty>
        <AttributeClassProperty>ID</AttributeClassProperty>
      </RelateProperty>
      <AttributeClass>Default:Parcels</AttributeClass>
      <ResourceId>Library://UnitTests/Data/SortableRight.FeatureSource</ResourceId>
      <Name>DATA</Name>
      <RelateType>Inner</RelateType>
      <ForceOneToOne>true</ForceOneToOne>
    </AttributeRelate>
    <Name>ParcelsInnerOneToOneBatchSortedBlock</Name>
    <FeatureClass>Default:ParcelFeatures</FeatureClass>
  </Extension>
  <Extension>
    <AttributeRelate>
      <RelateProperty>
        <FeatureClassProperty>ID</FeatureClassProperty>
        <AttributeClassProperty>ID</AttributeClassProperty>
      </RelateProperty>
      <AttributeClass>Default:Parcels</AttributeClass>
      <ResourceId>Library://UnitTests/Data/SortableRight.FeatureSource</ResourceId>
      <Name>DATA</Name>
      <RelateType>LeftOuter</RelateType>
      <ForceOneToOne>false</ForceOneToOne>
    </AttributeRelate>
    <Name>ParcelsLeftOuterBatchSortedBlock</Name>
    <FeatureClass>Default:ParcelFeatures</FeatureClass>
  </Extension>
  <Extension>
    <AttributeRelate>
      <RelateProperty>
        <FeatureClassProperty>ID</FeatureClassProperty>
        <AttributeClassProperty>ID</AttributeClassProperty>
      </RelateProperty>
      <AttributeClass>Default:Parcels</AttributeClass>
      <ResourceId>Library://UnitTests/Data/SortableRight.FeatureSource</ResourceId>
      <Name>DATA</Name>
      <RelateType>Inner</RelateType>
      <ForceOneToOne>false</ForceOneToOne>
    </AttributeRelate>
    <Name>ParcelsInnerBatchSortedBlock</Name>
    <FeatureClass>Default:ParcelFeatures</FeatureClass>
  </Extension>
  
</FeatureSource>