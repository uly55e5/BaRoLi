include(../../../3rdparty/QxOrm/QxOrm.pri)

TEMPLATE = lib
CONFIG += dll
DEFINES += _BUILDING_BAROLI
PRECOMPILED_HEADER = precompiled.h
LIBS += -l"QxOrm"

TARGET = baroliService

HEADERS += article.h \
    export.h \
    precompiled.h \
    accounttransfer.h \
    account.h \
    category.h
HEADERS += guest.h
HEADERS += user.h

SOURCES += article.cpp \
    accounttransfer.cpp \
    account.cpp \
    category.cpp
SOURCES += guest.cpp
SOURCES += user.cpp
