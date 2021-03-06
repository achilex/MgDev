AUTOMAKE_OPTIONS = foreign

EXTRA_DIST = Geometry.vcproj Geometry.rc Parse/script Parse/script_linux Parse/yyAwkt.y

lib_LTLIBRARIES = libMgGeometry.la

libMgGeometry_la_SOURCES = \
  GeometryBuild.cpp \
  ../CoordinateSystem/ArbitraryCoordsys.cpp \
  ../CoordinateSystem/CoordSysDictionaryBase.cpp \
  ../CoordinateSystem/CoordSys.cpp \
  ../CoordinateSystem/CoordSysCatalog.cpp \
  ../CoordinateSystem/CoordSysCategory.cpp \
  ../CoordinateSystem/CoordSysCategoryDictionary.cpp \
  ../CoordinateSystem/CoordSysDatum.cpp \
  ../CoordinateSystem/CoordSysDatumDictionary.cpp \
  ../CoordinateSystem/CoordSysDictionary.cpp \
  ../CoordinateSystem/CoordSysEllipsoid.cpp \
  ../CoordinateSystem/CoordSysEllipsoidDictionary.cpp \
  ../CoordinateSystem/CoordSysEnum.cpp \
  ../CoordinateSystem/CoordSysEnumCategory.cpp \
  ../CoordinateSystem/CoordSysEnumCoordinateSystemInCategory.cpp \
  ../CoordinateSystem/CoordSysEnumDatum.cpp \
  ../CoordinateSystem/CoordSysEnumEllipsoid.cpp \
  ../CoordinateSystem/CoordSysFormatConverter.cpp \
  ../CoordinateSystem/CoordSysGeodeticAnalyticalTransformDefParams.cpp \
  ../CoordinateSystem/CoordSysGeodeticInterpolationTransformDefParams.cpp \
  ../CoordinateSystem/CoordSysGeodeticMultipleRegressionTransformDefParams.cpp \
  ../CoordinateSystem/CoordSysGeodeticStandaloneTransformDefParams.cpp \
  ../CoordinateSystem/CoordSysGeodeticPath.cpp \
  ../CoordinateSystem/CoordSysGeodeticPathDictionary.cpp \
  ../CoordinateSystem/CoordSysGeodeticPathElement.cpp \
  ../CoordinateSystem/CoordSysGeodeticTransformation.cpp \
  ../CoordinateSystem/CoordSysGeodeticTransformDef.cpp \
  ../CoordinateSystem/CoordSysGeodeticTransformDefDictionary.cpp \
  ../CoordinateSystem/CoordSysGeodeticTransformDefParams.cpp \
  ../CoordinateSystem/CoordSysGeodeticTransformGridFile.cpp \
  ../CoordinateSystem/CoordSysMeasure.cpp \
  ../CoordinateSystem/CoordSysTransform.cpp \
  ../CoordinateSystem/CoordSysDictionaryUtility.cpp \
  ../CoordinateSystem/CoordSysEnumInteger32.cpp \
  ../CoordinateSystem/CoordSysMathComparator.cpp \
  ../CoordinateSystem/CoordSysProjectionInformation.cpp \
  ../CoordinateSystem/CoordSysUnitInformation.cpp \
  ../CoordinateSystem/CoordSysUtil.cpp \
  ../CoordinateSystem/MentorDictionary.cpp \
  ../CoordinateSystem/MentorUtil.cpp \
  ../CoordinateSystem/CoordSysWktFailureCache.cpp \
  ../CoordinateSystem/CoordSysGridGeneric.cpp \
  ../CoordinateSystem/CoordSysGrids.cpp \
  ../CoordinateSystem/CoordSysMgrsZone.cpp \
  ../CoordinateSystem/CoordSysMgrs.cpp \
  ../CoordinateSystem/CoordSysMgrsMajorRegion.cpp \
  ../CoordinateSystem/CoordSysOneGrid.cpp \
  ../CoordinateSystem/namestruct.cpp \
  ../CoordinateSystem/CriticalSection.cpp \
  ../CoordinateSystem/SmartCriticalClass.cpp

include_SOURCES = \
  AgfReaderWriter.cpp \
  AgfStream.cpp \
  AggregateGeometry.cpp \
  ArcSegment.cpp \
  Coordinate.cpp \
  CoordinateCollection.cpp \
  CoordinateIterator.cpp \
  CoordinateXY.cpp \
  CoordinateXYM.cpp \
  CoordinateXYZ.cpp \
  CoordinateXYZM.cpp \
  Curve.cpp \
  CurvePolygon.cpp \
  CurvePolygonCollection.cpp \
  CurveRing.cpp \
  CurveRingCollection.cpp \
  CurveSegmentCollection.cpp \
  CurveString.cpp \
  CurveStringCollection.cpp \
  Envelope.cpp \
  GeometricEntity.cpp \
  Geometry.cpp \
  GeometryClassFactory.cpp \
  GeometryCollection.cpp \
  GeometryFactory.cpp \
  GeometryUtil.cpp \
  GeosUtil.cpp \
  LinearRing.cpp \
  LinearRingCollection.cpp \
  LinearSegment.cpp \
  LineString.cpp \
  LineStringCollection.cpp \
  MultiCurvePolygon.cpp \
  MultiCurveString.cpp \
  MultiGeometry.cpp \
  MultiLineString.cpp \
  MultiPoint.cpp \
  MultiPolygon.cpp \
  Point.cpp \
  PointCollection.cpp \
  Polygon.cpp \
  PolygonCollection.cpp \
  Region.cpp \
  Ring.cpp \
  WktReaderWriter.cpp\
  Buffer/BorderWalker.cpp \
  Buffer/bufrutil.cpp \
  Buffer/eventarr.cpp \
  Buffer/FloatTransform.cpp \
  Buffer/GreatCircleBufferUtil.cpp \
  Buffer/interlst.cpp \
  Buffer/interprc.cpp \
  Buffer/LatLonBorderWalker.cpp \
  Buffer/MgBuffer.cpp \
  Buffer/ogeomtry.cpp \
  Buffer/oobject.cpp \
  Buffer/opline.cpp \
  Buffer/opolygon.cpp \
  Buffer/oppolygn.cpp \
  Buffer/oppolyln.cpp \
  Buffer/orpplygn.cpp \
  Buffer/ortree.cpp \
  Buffer/planeswp.cpp \
  Buffer/plgnbufr.cpp \
  Buffer/plgnsbak.cpp \
  Buffer/plinbufr.cpp \
  Buffer/pobjbufr.cpp \
  Buffer/ppgunion.cpp \
  Buffer/progcbck.cpp \
  Buffer/sedgaloc.cpp \
  Buffer/sweepedg.cpp \
  Buffer/tuplearr.cpp \
  Buffer/vertaloc.cpp \
  Buffer/wedgaloc.cpp \
  Buffer/wedgearr.cpp \
  Buffer/wingedge.cpp \
  Buffer/worklist.cpp \
  Buffer/xordtree.cpp \
  CoordinateSystem/CoordinateSystemCache.cpp \
  CoordinateSystem/CoordinateSystemFactory.cpp \
  Exception/CoordinateSystemComputationFailedException.cpp \
  Exception/CoordinateSystemConversionFailedException.cpp \
  Exception/CoordinateSystemInitializationFailedException.cpp \
  Exception/CoordinateSystemLoadFailedException.cpp \
  Exception/CoordinateSystemMeasureFailedException.cpp \
  Exception/CoordinateSystemTransformFailedException.cpp \
  Exception/GeometryException.cpp\
  Exception/InvalidCoordinateSystemException.cpp \
  Exception/InvalidCoordinateSystemTypeException.cpp \
  Exception/InvalidCoordinateSystemUnitsException.cpp \
  Parse/ArrayHelper.cpp \
  Parse/LexAwkt.cpp \
  Parse/ParseAwkt.cpp \
  Parse/ParseAwktUtil.cpp \
  Parse/StringUtility.cpp \
  Parse/yyAwkt.cpp \
  Parse/yyAwkt_linux.cpp \
  Spatial/MathUtility.cpp \
  Spatial/SpatialUtility.cpp \
  Spatial/SpatialUtilityCircularArc.cpp \
  ../CoordinateSystem/ArbitraryCoordsys.cpp \
  ../CoordinateSystem/CoordSys.cpp \
  ../CoordinateSystem/CoordSysCatalog.cpp \
  ../CoordinateSystem/CoordSysCategory.cpp \
  ../CoordinateSystem/CoordSysCategoryDictionary.cpp \
  ../CoordinateSystem/CoordSysDatum.cpp \
  ../CoordinateSystem/CoordSysDatumDictionary.cpp \
  ../CoordinateSystem/CoordSysDictionary.cpp \
  ../CoordinateSystem/CoordSysEllipsoid.cpp \
  ../CoordinateSystem/CoordSysEllipsoidDictionary.cpp \
  ../CoordinateSystem/CoordSysEnum.cpp \
  ../CoordinateSystem/CoordSysEnumCategory.cpp \
  ../CoordinateSystem/CoordSysEnumCoordinateSystemInCategory.cpp \
  ../CoordinateSystem/CoordSysEnumDatum.cpp \
  ../CoordinateSystem/CoordSysEnumEllipsoid.cpp \
  ../CoordinateSystem/CoordSysFormatConverter.cpp \
  ../CoordinateSystem/CoordSysGeodeticAnalyticalTransformDefParams.cpp\
  ../CoordinateSystem/CoordSysGeodeticInterpolationTransformDefParams.cpp\
  ../CoordinateSystem/CoordSysGeodeticMultipleRegressionTransformDefParams.cpp\
  ../CoordinateSystem/CoordSysGeodeticStandaloneTransformDefParams.cpp\
  ../CoordinateSystem/CoordSysGeodeticPath.cpp\
  ../CoordinateSystem/CoordSysGeodeticPathDictionary.cpp\
  ../CoordinateSystem/CoordSysGeodeticPathElement.cpp\
  ../CoordinateSystem/CoordSysGeodeticTransformation.cpp\
  ../CoordinateSystem/CoordSysGeodeticTransformDef.cpp\
  ../CoordinateSystem/CoordSysGeodeticTransformDefDictionary.cpp\
  ../CoordinateSystem/CoordSysGeodeticTransformDefParams.cpp\
  ../CoordinateSystem/CoordSysGeodeticTransformGridFile.cpp\
  ../CoordinateSystem/CoordSysMeasure.cpp \
  ../CoordinateSystem/CoordSysTransform.cpp \
  ../CoordinateSystem/CoordSysDictionaryUtility.cpp \
  ../CoordinateSystem/CoordSysEnumInteger32.cpp \
  ../CoordinateSystem/CoordSysMathComparator.cpp \
  ../CoordinateSystem/CoordSysProjectionInformation.cpp \
  ../CoordinateSystem/CoordSysUnitInformation.cpp \
  ../CoordinateSystem/CoordSysUtil.cpp \
  ../CoordinateSystem/MentorDictionary.cpp \
  ../CoordinateSystem/MentorUtil.cpp \
  ../CoordinateSystem/CoordSysWktFailureCache.cpp \
  ../CoordinateSystem/CoordSysGridGeneric.cpp \
  ../CoordinateSystem/CoordSysGrids.cpp \
  ../CoordinateSystem/CoordSysMgrsZone.cpp \
  ../CoordinateSystem/CoordSysMgrs.cpp \
  ../CoordinateSystem/CoordSysMgrsMajorRegion.cpp \
  ../CoordinateSystem/CoordSysOneGrid.cpp \
  ../CoordinateSystem/CriticalSection.cpp \
  ../CoordinateSystem/SmartCriticalClass.cpp

noinst_HEADERS = $(include_SOURCES) \
  AgfReaderWriter.h \
  AgfStream.h \
  AggregateGeometry.h \
  ArcSegment.h \
  CloseInstruction.h \
  Coordinate.h \
  CoordinateCollection.h \
  CoordinateDimension.h \
  CoordinateIterator.h \
  CoordinateXY.h \
  CoordinateXYM.h \
  CoordinateXYZ.h \
  CoordinateXYZM.h \
  Curve.h \
  CurvePolygon.h \
  CurvePolygonCollection.h \
  CurveRing.h \
  CurveRingCollection.h \
  CurveSegment.h \
  CurveSegmentCollection.h \
  CurveString.h \
  CurveStringCollection.h \
  Envelope.h \
  GeometricDimension.h \
  GeometricEntity.h \
  GeometricEntityType.h \
  GeometricPathInstruction.h \
  GeometricPathInstructionType.h \
  GeometricPathIterator.h \
  Geometry.h \
  GeometryClassId.h \
  GeometryCollection.h \
  GeometryCommon.h \
  GeometryComponent.h \
  GeometryComponentType.h \
  GeometryExceptionDef.h \
  GeometryFactory.h \
  GeometryType.h \
  GeometryUtil.h \
  GeosUtil.h \
  LinearRing.h \
  LinearRingCollection.h \
  LinearSegment.h \
  LineString.h \
  LineStringCollection.h \
  LineToInstruction.h \
  Measure.h \
  MoveToInstruction.h \
  MultiCurvePolygon.h \
  MultiCurveString.h \
  MultiGeometry.h \
  MultiLineString.h \
  MultiPoint.h \
  MultiPolygon.h \
  Point.h \
  PointCollection.h \
  Polygon.h \
  PolygonCollection.h \
  QuadToInstruction.h \
  Region.h \
  Ring.h \
  Transform.h \
  WktReaderWriter.h \
  Buffer/BorderWalker.h \
  Buffer/buffer.h \
  Buffer/bufraloc.h \
  Buffer/bufrsort.h \
  Buffer/bufrutil.h \
  Buffer/DumpFFGF.h \
  Buffer/eventarr.h \
  Buffer/eventint.h \
  Buffer/FloatTransform.h \
  Buffer/GreatCircleBufferUtil.h \
  Buffer/interlst.h \
  Buffer/interprc.h \
  Buffer/LatLonBorderWalker.h \
  Buffer/MgBuffer.h \
  Buffer/oarray.h \
  Buffer/oextent.h \
  Buffer/ogeomtry.h \
  Buffer/olinep.h \
  Buffer/oobject.h \
  Buffer/opline.h \
  Buffer/opoint.h \
  Buffer/opolygnp.h \
  Buffer/opolygon.h \
  Buffer/oppolygn.h \
  Buffer/oppolyln.h \
  Buffer/opsprimitive.h \
  Buffer/orpplygn.h \
  Buffer/ortree.h \
  Buffer/performanceOptions.h \
  Buffer/planeswp.h \
  Buffer/plgnbufr.h \
  Buffer/plgnsbak.h \
  Buffer/plinbufr.h \
  Buffer/pobjbufr.h \
  Buffer/ppgunion.h \
  Buffer/progcbck.h \
  Buffer/sedgaloc.h \
  Buffer/sweepedg.h \
  Buffer/tuplearr.h \
  Buffer/vertaloc.h \
  Buffer/wedgaloc.h \
  Buffer/wedgearr.h \
  Buffer/wingedge.h \
  Buffer/worklist.h \
  Buffer/xordtree.h \
  CoordinateSystem/CoordinateSystem.h \
  CoordinateSystem/CoordinateSystemCache.h \
  CoordinateSystem/CoordinateSystemCatalog.h \
  CoordinateSystem/CoordinateSystemCategory.h \
  CoordinateSystem/CoordinateSystemCategoryDictionary.h \
  CoordinateSystem/CoordinateSystemCodeFormat.h \
  CoordinateSystem/CoordinateSystemCommon.h \
  CoordinateSystem/CoordinateSystemDatum.h \
  CoordinateSystem/CoordinateSystemDatumDictionary.h \
  CoordinateSystem/CoordinateSystemDictionary.h \
  CoordinateSystem/CoordinateSystemDictionaryBase.h \
  CoordinateSystem/CoordinateSystemDictionaryUtility.h \
  CoordinateSystem/CoordinateSystemEllipsoid.h \
  CoordinateSystem/CoordinateSystemEllipsoidDictionary.h \
  CoordinateSystem/CoordinateSystemEnum.h \
  CoordinateSystem/CoordinateSystemEnumInteger32.h \
  CoordinateSystem/CoordinateSystemErrorCode.h \
  CoordinateSystem/CoordinateSystemFactory.h \
  CoordinateSystem/CoordinateSystemFilter.h \
  CoordinateSystem/CoordinateSystemFilterInteger32.h \
  CoordinateSystem/CoordinateSystemFormatConverter.h \
  CoordinateSystem/CoordinateSystemGeodeticTransformation.h \
  CoordinateSystem/CoordinateSystemGeodeticTransformationMethod.h \
  CoordinateSystem/CoordinateSystemGeodeticAnalyticalTransformationMethod.h \
  CoordinateSystem/CoordinateSystemGeodeticMultipleRegressionTransformationMethod.h \
  CoordinateSystem/CoordinateSystemGeodeticStandaloneTransformationMethod.h \
  CoordinateSystem/CoordinateSystemGeodeticTransformGridFileFormat.h \
  CoordinateSystem/CoordinateSystemMathComparator.h \
  CoordinateSystem/CoordinateSystemMeasure.h \
  CoordinateSystem/CoordinateSystemProjectionCode.h \
  CoordinateSystem/CoordinateSystemProjectionFormatType.h \
  CoordinateSystem/CoordinateSystemProjectionInformation.h \
  CoordinateSystem/CoordinateSystemProjectionLogicalType.h \
  CoordinateSystem/CoordinateSystemProjectionParameterType.h \
  CoordinateSystem/CoordinateSystemTransform.h \
  CoordinateSystem/CoordinateSystemType.h \
  CoordinateSystem/CoordinateSystemUnitCode.h \
  CoordinateSystem/CoordinateSystemUnitInformation.h \
  CoordinateSystem/CoordinateSystemUnitType.h \
  CoordinateSystem/CoordinateSystemWktFlavor.h \
  CoordinateSystem/CoordinateSystemGridOrientation.h \
  CoordinateSystem/CoordinateSystemGridSpecializationType.h \
  CoordinateSystem/CoordinateSystemGrids.h \
  CoordinateSystem/CoordinateSystemGridGeneric.h \
  CoordinateSystem/CoordinateSystemMgrsGridLevel.h \
  CoordinateSystem/CoordinateSystemMgrsGridSquarePosition.h \
  CoordinateSystem/CoordinateSystemMgrsLetteringScheme.h \
  CoordinateSystem/CoordinateSystemMgrs.h \
  Exception/CoordinateSystemComputationFailedException.h \
  Exception/CoordinateSystemConversionFailedException.h \
  Exception/CoordinateSystemInitializationFailedException.h \
  Exception/CoordinateSystemLoadFailedException.h \
  Exception/CoordinateSystemMeasureFailedException.h \
  Exception/CoordinateSystemTransformFailedException.h \
  Exception/GeometryException.h \
  Exception/InvalidCoordinateSystemException.h \
  Exception/InvalidCoordinateSystemTypeException.h \
  Exception/InvalidCoordinateSystemUnitsException.h \
  Parse/Array.h \
  Parse/ArrayHelper.h \
  Parse/LexAwkt.h \
  Parse/ParseAwkt.h \
  Parse/ParseAwktUtil.h \
  Parse/StringUtility.h \
  Parse/yyAwkt.h \
  Spatial/MathUtility.h \
  Spatial/SpatialUtility.h \
  Spatial/SpatialUtilityStatus.h \
  Spatial/SpatialUtilityCircularArc.h \
  Spatial/SpatialUtilityVectorAngle.h \
  ../CoordinateSystem/ArbitraryCoordsys.h \
  ../CoordinateSystem/CoordSys.h \
  ../CoordinateSystem/CoordSysDictionaryBase.h \
  ../CoordinateSystem/CoordSysCatalog.h \
  ../CoordinateSystem/CoordSysCategory.h \
  ../CoordinateSystem/CoordSysCategoryDictionary.h \
  ../CoordinateSystem/CoordSysCommon.h \
  ../CoordinateSystem/CoordSysDatum.h \
  ../CoordinateSystem/CoordSysDatumDictionary.h \
  ../CoordinateSystem/CoordSysDictionary.h \
  ../CoordinateSystem/CoordSysEllipsoid.h \
  ../CoordinateSystem/CoordSysEllipsoidDictionary.h \
  ../CoordinateSystem/CoordSysEnum.h \
  ../CoordinateSystem/CoordSysEnumCategory.h \
  ../CoordinateSystem/CoordSysEnumCoordinateSystemInCategory.h \
  ../CoordinateSystem/CoordSysEnumDatum.h \
  ../CoordinateSystem/CoordSysEnumEllipsoid.h \
  ../CoordinateSystem/CoordSysFormatConverter.h \
  ../CoordinateSystem/CoordSysGeodeticAnalyticalTransformDefParams.h \
  ../CoordinateSystem/CoordSysGeodeticInterpolationTransformDefParams.h \
  ../CoordinateSystem/CoordSysGeodeticMultipleRegressionTransformDefParams.h \
  ../CoordinateSystem/CoordSysGeodeticStandaloneTransformDefParams.h \
  ../CoordinateSystem/CoordSysGeodeticPath.h \
  ../CoordinateSystem/CoordSysGeodeticPathDictionary.h \
  ../CoordinateSystem/CoordSysGeodeticPathElement.h \
  ../CoordinateSystem/CoordSysGeodeticTransformation.h \
  ../CoordinateSystem/CoordSysGeodeticTransformDef.h \
  ../CoordinateSystem/CoordSysGeodeticTransformDefDictionary.h \
  ../CoordinateSystem/CoordSysGeodeticTransformDefParams.h \
  ../CoordinateSystem/CoordSysGeodeticTransformGridFile.h \
  ../CoordinateSystem/CoordSysMeasure.h \
  ../CoordinateSystem/CoordSysTransform.h \
  ../CoordinateSystem/CoordSysType.h \
  ../CoordinateSystem/CoordSysUtil.h \
  ../CoordinateSystem/CriticalSection.h \
  ../CoordinateSystem/SmartCriticalClass.h \
  ../CoordinateSystem/CoordSysDictionaryUtility.h \
  ../CoordinateSystem/CoordSysEnumInteger32.h \
  ../CoordinateSystem/CoordSysMathComparator.h \
  ../CoordinateSystem/CoordSysMacro.h\
  ../CoordinateSystem/CoordSysProjectionInformation.h \
  ../CoordinateSystem/CoordSysUnitInformation.h \
  ../CoordinateSystem/CsmapVersion.h \
  ../CoordinateSystem/MentorDictionary.h \
  ../CoordinateSystem/MentorUtil.h \
  ../CoordinateSystem/namestruct.h \
  ../CoordinateSystem/CoordSysWktFailureCache.h \
  ../CoordinateSystem/CoordSysGridGeneric.h \
  ../CoordinateSystem/CoordSysGrids.h \
  ../CoordinateSystem/CoordSysMgrsZone.h \
  ../CoordinateSystem/CoordSysMgrs.h \
  ../CoordinateSystem/CoordSysMgrsMajorRegion.h \
  ../CoordinateSystem/CoordSysOneGrid.h

INCLUDES = \
  -I../Security \
  -I../MdfParser \
  -I../MdfModel \
  -I../Foundation \
  -I../Geometry \
  -I../../Oem/ACE/ACE_wrappers \
  -I../../Oem/geos/include \
  -I../../Oem/dbxml/xerces-c-src/src \
  -I../../Oem/CsMap/Include \
  -I../../Common/CoordinateSystem

libMgGeometry_la_LIBADD = \
  -lACE \
  -lMgFoundation \
  ../../Oem/CsMap/.libs/libCsmap.a \
  ../../Oem/geos/src/.libs/libgeos.a

libMgGeometry_la_LDFLAGS = -release $(PACKAGE_VERSION) \
  -L../../Oem/ACE/ACE_wrappers/ace \
  -L../Foundation \
  -L../../Oem/CsMap \
  -L../../Common/CoordinateSystem

