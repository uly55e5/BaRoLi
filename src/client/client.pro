include(../../../3rdparty/QxOrm/QxOrm.pri)
TEMPLATE = app
TARGET = baroliClient
DEFINES += _BUILDING_BAROLI
PRECOMPILED_HEADER = ../common/precompiled.h
LIBS += -l"QxOrm"
LIBS += -L"../common"
LIBS += -l"baroliService"

HEADERS += ./gui/clientmainwindow.h

SOURCES += client_main.cpp

SOURCES += ./gui/clientmainwindow.cpp

FORMS += ./gui/clientmainwindow.ui
