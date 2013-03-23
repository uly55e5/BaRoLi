#ifndef USER_H
#define USER_H

#include <QString>
#include <QDateTime>

class User
{
public:
    User();
    virtual ~User();
    // Properties
    long m_id;
    QString m_name;
    QString m_password;
    QDateTime m_lastLogin;
    // TODO Roles
};

#endif // USER_H
