#ifndef BAROLIDATABASE_H
#define BAROLIDATABASE_H

class QX_BAROLI_COMMON_DLL_EXPORT BaRoLiDatabase
{
public:
    BaRoLiDatabase();

    static void initSqlite();
    static void createTables();

private:
    static QString s_driverName;
    static QString s_databaseName;
    static QString s_hostname;
    static QString s_userName;
    static QString s_password;
};

#endif // BAROLIDATABASE_H
