include(../../../3rdparty/QxOrm/QxOrm.pri)
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
TARGET = baroliClient
DEFINES += _BUILDING_BAROLI
PRECOMPILED_HEADER = ../common/precompiled.h
LIBS += -l"QxOrm"
LIBS += -L"../common"
LIBS += -l"baroliService"

HEADERS += gui/adminwidget.h \
    gui/mainwindow.h

SOURCES += client_main.cpp \
    gui/adminwidget.cpp \
    gui/mainwindow.cpp

FORMS += gui/adminwidget.ui \
    gui/mainwindow.ui
