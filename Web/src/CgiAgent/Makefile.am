AUTOMAKE_OPTIONS = foreign

EXTRA_DIST = CgiAgent.rc CgiAgent.vcproj

prefix=@prefix@/webserverextensions

INCLUDES    = -I../../../Common/Foundation \
              -I../../../Common/Geometry \
              -I../../../Common/PlatformBase \
              -I../../../Common/MapGuideCommon \
              -I../../../Common/MdfModel \
              -I../../../Oem/ACE/ACE_wrappers \
              -I../HttpHandler \
              -I../WebSupport \
              -I../MapAgentCommon

bin_PROGRAMS = mapagent

mapagent_SOURCES = CgiAgent.cpp \
                   CgiPostParser.cpp \
                   CgiReaderStreamer.cpp \
                   CgiResponseHandler.cpp \
                   EchoTest.cpp \
                   ../MapAgentCommon/MapAgentCommon.cpp \
                   ../MapAgentCommon/MapAgentStrings.cpp \
                   ../MapAgentCommon/MapAgentGetParser.cpp \
                   ../WebSupport/InitializeWebTier.cpp

noinst_HEADERS = CgiPostParser.h \
                 CgiReaderStreamer.h \
                 CgiResponseHandler.h \
                 ../MapAgentCommon/MapAgentCommon.h \
                 ../MapAgentCommon/MapAgentGetParser.h \
                 ../MapAgentCommon/MapAgentStrings.h \
                 ../WebSupport/WebSupport.h

mapagent_LDADD = -lACE \
                 -lxerces-c \
                 -lMgFoundation \
                 -lMgGeometry \
                 -lMgPlatformBase \
                 -lMgMapGuideCommon \
                 -lMgMdfModel \
                 -lMgMdfParser \
                 -lMgHttpHandler \
                 -lMgWebSupport \
                 -llib_json

mapagent_LDFLAGS = \
            -L../../../Oem/ACE/ACE_wrappers/ace \
            -L../../../Oem/dbxml/install/lib \
            -L../../../Oem/jsoncpp/lib \
            -L../../../Common/CoordinateSystem \
            -L../../../Common/MdfModel \
            -L../../../Common/MdfParser \
            -L../../../Common/Foundation \
            -L../../../Common/Geometry \
            -L../../../Common/PlatformBase \
            -L../../../Common/MapGuideCommon \
            -L../HttpHandler \
            -L../WebSupport
