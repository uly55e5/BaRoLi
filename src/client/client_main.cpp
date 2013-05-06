#include <iostream>

#include "../common/precompiled.h"

#include "../common/dao/barolidatabase.h"

#include "gui/mainwindow.h"
#include "gui/adminwidget.h"

#include <QApplication>

#include <QxMemLeak.h>

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

    //BaRoLiDatabase::initSqlite();
    //BaRoLiDatabase::createTables();


    MainWindow mw;
    AdminWidget aw;
    aw.show();
    mw.show();
    app.quitOnLastWindowClosed();
    return app.exec();
}

