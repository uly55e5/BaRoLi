include(../../../3rdparty/QxOrm/QxOrm.pri)

TEMPLATE = lib
CONFIG += dll
DEFINES += _BUILDING_BAROLI
PRECOMPILED_HEADER = precompiled.h
LIBS += -l"QxOrm"

TARGET = baroliService

HEADERS += dataobjects/article.h \
    dataobjects/export.h \
    dataobjects/precompiled.h \
    dataobjects/accounttransfer.h \
    dataobjects/account.h \
    dataobjects/category.h \
    dataobjects/userrole.h \
    dataobjects/articletransfer.h \
    dataobjects/guesttransfer.h \
    dataobjects/guest.h \
    dataobjects/user.h \
    dao/barolidatabase.h \
    dao/articlemanager.h

SOURCES += dataobjects/article.cpp \
    dataobjects/accounttransfer.cpp \
    dataobjects/account.cpp \
    dataobjects/category.cpp \
    dataobjects/userrole.cpp \
    dataobjects/articletransfer.cpp \
    dataobjects/guesttransfer.cpp \
    dataobjects/guest.cpp \
    dataobjects/user.cpp \
    dao/barolidatabase.cpp \
    dao/articlemanager.cpp
