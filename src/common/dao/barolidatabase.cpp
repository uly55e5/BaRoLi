#include "precompiled.h"

#include "barolidatabase.h"

#include "dataobjects/account.h"
#include "dataobjects/accounttransfer.h"
#include "dataobjects/article.h"
#include "dataobjects/articletransfer.h"
#include "dataobjects/category.h"
#include "dataobjects/guest.h"
#include "dataobjects/guesttransfer.h"
#include "dataobjects/user.h"
#include "dataobjects/userrole.h"

#include <QxMemLeak.h>

QString BaRoLiDatabase::s_driverName="QSQLITE";
QString BaRoLiDatabase::s_databaseName="baroli.db";
QString BaRoLiDatabase::s_hostname="localhost";
QString BaRoLiDatabase::s_userName="root";
QString BaRoLiDatabase::s_password="";

BaRoLiDatabase::BaRoLiDatabase()
{
    BaRoLiDatabase::initSqlite();
    BaRoLiDatabase::createTables();
}

void BaRoLiDatabase::initSqlite()
{
   qx::QxSqlDatabase::getSingleton()->setDriverName(s_driverName);
   qx::QxSqlDatabase::getSingleton()->setDatabaseName(s_databaseName);
   qx::QxSqlDatabase::getSingleton()->setHostName(s_hostname);
   qx::QxSqlDatabase::getSingleton()->setUserName(s_userName);
   qx::QxSqlDatabase::getSingleton()->setPassword("");
}

void BaRoLiDatabase::createTables()
{
    QSqlError daoError = qx::dao::create_table<Article>();
    daoError = qx::dao::create_table<Account>();
    daoError = qx::dao::create_table<AccountTransfer>();
    daoError = qx::dao::create_table<ArticleTransfer>();
    daoError = qx::dao::create_table<Category>();
    daoError = qx::dao::create_table<Guest>();
    daoError = qx::dao::create_table<GuestTransfer>();
    daoError = qx::dao::create_table<User>();
    daoError = qx::dao::create_table<UserRole>();
}
