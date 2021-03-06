AUTOMAKE_OPTIONS = foreign

EXTRA_DIST = ServerFeatureService.vcproj ServerFeatureService.rc

prefix=@prefix@/server

INCLUDES = \
  -I$(map_fdo_include) \
  -I$(map_fdo_include)/ExpressionEngine \
  -I../../../../Oem/ACE/ACE_wrappers \
  -I../../../../Oem/dbxml/xerces-c-src/src \
  -I../../Gws/Include \
  -I../../Gws/GwsCommon/inc \
  -I../../Gws/GwsQueryEngine/inc \
  -I../../../../Common/Security \
  -I../../../../Common/Foundation \
  -I../../../../Common/Geometry \
  -I../../../../Common/PlatformBase \
  -I../../../../Common/MapGuideCommon \
  -I../../../../Common/MdfModel \
  -I../../../../Common/MdfParser \
  -I../../../../Common/Stylization \
  -I../../Common \
  -I../../Common/Base \
  -I../../Common/Cache \
  -I../../Common/Manager \
  -I../../Common/ServerUtil

lib_LTLIBRARIES = libMgServerFeatureService.la

libMgServerFeatureService_la_SOURCES = \
  ServerFeatureServiceBuild.cpp

include_SOURCES = \
  FeatureOperation.cpp \
  FeatureOperationFactory.cpp \
  FeatureServiceHandler.cpp \
  GwsConnectionPool.cpp \
  OpAddSavePoint.cpp \
  OpApplySchema.cpp \
  OpCreateFeatureSource.cpp \
  OpDescribeSchema.cpp \
  OpDescribeSchemaAsXml.cpp \
  OpExecuteSqlNonQuery.cpp \
  OpExecuteSqlQuery.cpp \
  OpGetCapabilities.cpp \
  OpGetConnectionPropertyValues.cpp \
  OpGetFdoCacheInfo.cpp \
  OpGetFeatureProviders.cpp \
  OpGetIdentityProperties.cpp \
  OpReleaseSavePoint.cpp \
  OpRollbackSavePoint.cpp \
  OpGetSpatialContexts.cpp \
  OpSelectFeatures.cpp \
  OpSelectFeaturesSpatial.cpp \
  OpTestConnection.cpp \
  OpTestFeatureSourceConnection.cpp \
  OpUpdateFeatures.cpp \
  ServerApplySchema.cpp \
  ServerDescribeSchema.cpp \
  ServerFeatureConnection.cpp \
  ServerFeatureService.cpp \
  ServerGetFeatureProviders.cpp \
  ServerGetProviderCapabilities.cpp \
  ServerGwsFeatureReader.cpp \
  ServerSelectFeatures.cpp \
  OpCloseFeatureReader.cpp \
  OpGetFeatures.cpp \
  ServerFeatureReader.cpp \
  ServerFdoFeatureReader.cpp \
  ServerFeatureReaderPool.cpp \
  OpGetLongTransactions.cpp \
  ServerGetConnectionPropertyValues.cpp \
  ServerGetLongTransactions.cpp \
  ServerGetSpatialContexts.cpp \
  OpGetClassDefinition.cpp \
  OpGetClasses.cpp \
  OpGetSchemas.cpp \
  OpGetRaster.cpp \
  OpCloseSqlReader.cpp \
  OpGetSqlRows.cpp \
  ServerDataReaderPool.cpp \
  ServerFeatureUtil.cpp \
  ServerSqlCommand.cpp \
  ServerSqlDataReader.cpp \
  FeatureServiceCommand.cpp \
  FeatureDistribution.cpp \
  OpCloseDataReader.cpp \
  OpGetDataRows.cpp \
  SelectAggregateCommand.cpp \
  SelectCommand.cpp \
  ServerCreateFeatureSource.cpp \
  ServerDataReader.cpp \
  ServerSqlDataReaderPool.cpp \
  FeatureNumericFunctions.cpp \
  FeatureStringFunctions.cpp \
  FeatureGeometricFunctions.cpp \
  FeatureManipulationCommand.cpp \
  ServerDeleteCommand.cpp \
  ServerInsertCommand.cpp \
  ServerUpdateCommand.cpp \
  ServerUpdateFeatures.cpp \
  OpSchemaToXml.cpp \
  OpXmlToSchema.cpp \
  ByteSourceRasterStreamImpl.cpp \
  OpDescribeWfsFeatureType.cpp \
  OpGetWfsFeature.cpp \
  FilterUtil.cpp \
  OpEnumerateDataStores.cpp \
  OpGetSchemaMapping.cpp \
  ServerEnumerateDataStores.cpp \
  ServerGetSchemaMapping.cpp \
  OpSetLongTransaction.cpp \
  MgCSTrans.cpp \
  TransformCache.cpp \
  JoinFeatureReader.cpp \
  FdoFeatureReader.cpp \
  FdoFilterCollection.cpp \
  FdoReaderCollection.cpp \
  OpBeginTransaction.cpp \
  OpCommitTransaction.cpp \
  OpRollbackTransaction.cpp \
  OpUpdateFeaturesWithTransaction.cpp \
  ServerFeatureTransaction.cpp \
  ServerFeatureTransactionPool.cpp

noinst_HEADERS = $(include_SOURCES) \
  FeatureOperation.h \
  FeatureOperationFactory.h \
  FeatureServiceHandler.h \
  ServerFeatureService.h \
  GwsConnectionPool.h \
  OpAddSavePoint.h \
  OpApplySchema.h \
  OpCreateFeatureSource.h \
  OpDescribeSchema.h \
  OpDescribeSchemaAsXml.h \
  OpExecuteSqlNonQuery.h \
  OpExecuteSqlQuery.h \
  OpGetCapabilities.h \
  OpGetConnectionPropertyValues.h \
  OpGetFdoCacheInfo.h \
  OpGetFeatureProviders.h \
  OpGetSpatialContexts.h \
  OpGetIdentityProperties.h \
  OpReleaseSavePoint.h \
  OpRollbackSavePoint.h  \
  OpSelectFeatures.h \
  OpSelectFeaturesSpatial.h \
  OpTestConnection.h \
  OpTestFeatureSourceConnection.h \
  OpUpdateFeatures.h \
  ServerApplySchema.h \
  ServerDescribeSchema.h \
  ServerFeatureConnection.h \
  ServerFeatureDllExport.h \
  ServerFeatureService.h \
  ServerFeatureServiceDefs.h \
  ServerGetFeatureProviders.h \
  ServerGetProviderCapabilities.h \
  ../../Common/stdafx.h \
  ServerGwsFeatureReader.h \
  ServerSelectFeatures.h \
  OpCloseFeatureReader.h \
  OpGetFeatures.h \
  ServerFeatureReader.h \
  ServerFdoFeatureReader.h \
  ServerFeatureReaderPool.h \
  OpGetLongTransactions.h \
  ServerGetConnectionPropertyValues.h \
  ServerGetLongTransactions.h \
  ServerGetSpatialContexts.h \
  OpGetClassDefinition.h \
  OpGetClasses.h \
  OpGetSchemas.h \
  OpGetRaster.h \
  OpCloseSqlReader.h \
  OpGetSqlRows.h \
  ServerDataReaderPool.h \
  ServerFeatureUtil.h \
  ServerSqlCommand.h \
  ServerSqlDataReader.h \
  FeatureServiceCommand.h \
  FeatureDistribution.h \
  OpCloseDataReader.h \
  OpGetDataRows.h \
  SelectAggregateCommand.h \
  SelectCommand.h \
  ServerCreateFeatureSource.h \
  ServerDataReader.h \
  ServerSqlDataReaderPool.h \
  Matrix.h \
  DataReaderCreator.h \
  DoubleDataReaderCreator.h \
  FeatureNumericFunctions.h \
  FeatureStringFunctions.h \
  ByteDataReaderCreator.h \
  Int16DataReaderCreator.h \
  Int32DataReaderCreator.h \
  Int64DataReaderCreator.h \
  SingleDataReaderCreator.h \
  StringDataReaderCreator.h \
  UniqueFunction.h \
  FeatureGeometricFunctions.h \
  GeometryDataReaderCreator.h \
  ServerFeatureServiceExceptionDef.h \
  FeatureManipulationCommand.h \
  ServerDeleteCommand.h \
  ServerInsertCommand.h \
  ServerUpdateCommand.h \
  ServerUpdateFeatures.h \
  OpSchemaToXml.h \
  OpXmlToSchema.h \
  BooleanDataReaderCreator.h \
  ByteSourceRasterStreamImpl.h \
  DateTimeDataReaderCreator.h \
  OpDescribeWfsFeatureType.h \
  OpGetWfsFeature.h \
  FilterUtil.h \
  OpEnumerateDataStores.h \
  OpGetSchemaMapping.h \
  ServerEnumerateDataStores.h \
  ServerGetSchemaMapping.h \
  OpSetLongTransaction.h \
  MgCSTrans.h \
  TransformCache.h \
  JoinFeatureReader.h \
  FdoFeatureReader.h \
  FdoFilterCollection.h \
  FdoReaderCollection.h \
  OpBeginTransaction.h \
  OpCommitTransaction.h \
  OpRollbackTransaction.h \
  OpUpdateFeaturesWithTransaction.h \
  ServerFeatureTransaction.h \
  ServerFeatureTransactionPool.h

libMgServerFeatureService_la_LIBADD = -lMgGwsCommon -lMgGwsQueryEngine

libMgServerFeatureService_la_LDFLAGS = -release $(PACKAGE_VERSION) \
  -L../../Gws/GwsCommon \
  -L../../Gws/GwsQueryEngine
