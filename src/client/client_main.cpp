#include <iostream>

#include "../common/precompiled.h"

#include "../common/dao/barolidatabase.h"

#include <QxMemLeak.h>

int main(int argc, char * argv[])
{
    QCoreApplication app(argc, argv);

    BaRoLiDatabase::initSqlite();
    BaRoLiDatabase::createTables();

    return 0;
}

