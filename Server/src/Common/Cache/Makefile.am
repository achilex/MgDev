AUTOMAKE_OPTIONS = foreign

EXTRA_DIST = ServerCache.vcproj ServerCache.rc

prefix=@prefix@/server

INCLUDES = \
  -I../../../../Common/Foundation \
  -I../../../../Common/PlatformBase \
  -I../../../../Common/MapGuideCommon \
  -I../../../../Common/Geometry \
  -I../../../../Common/MdfModel \
  -I../../../../Oem/ACE/ACE_wrappers \
  -I$(map_fdo_include)

lib_LTLIBRARIES = libMgServerCache.la

libMgServerCache_la_SOURCES = \
  ServerCacheBuild.cpp

include_SOURCES = \
  ServerCache.cpp \
  ServerCacheEntry.cpp \
  ServerCacheItem.cpp \
  FeatureClassCacheItem.cpp \
  FeatureSchemaCacheItem.cpp \
  FeatureServiceCache.cpp \
  FeatureServiceCacheEntry.cpp \
  FeatureSourceCacheItem.cpp \
  SpatialContextCacheItem.cpp \
  ResourceLayerDefinitionCacheItem.cpp \
  ResourceServiceCache.cpp \
  ResourceServiceCacheEntry.cpp

noinst_HEADERS = $(include_SOURCES) \
  ServerCache.h \
  ServerCacheDllExport.h \
  ServerCacheEntry.h \
  ServerCacheItem.h \
  FeatureClassCacheItem.h \
  FeatureSchemaCacheItem.h \
  FeatureServiceCache.h \
  FeatureServiceCacheEntry.h \
  FeatureSourceCacheItem.h \
  SpatialContextCacheItem.h \
  ResourceLayerDefinitionCacheItem.h \
  ResourceServiceCache.h \
  ResourceServiceCacheEntry.h

libMgServerCache_la_LDFLAGS = -release $(PACKAGE_VERSION)
