#ifndef USER_H
#define USER_H

#include <QString>
#include <QDateTime>

class AccountTransfer;
class ArticleTransfer;
class GuestTransfer;

#include "userrole.h"

class QX_BAROLI_COMMON_DLL_EXPORT User
{
public:
    typedef boost::shared_ptr<AccountTransfer> AccountTransferP;
    typedef boost::shared_ptr<UserRole> UserRoleP;
    typedef boost::shared_ptr<ArticleTransfer> ArticleTransferP;
    typedef boost::shared_ptr<GuestTransfer> GuestTransferP;
    typedef qx::QxCollection<long,UserRoleP> UserRolePs;
    typedef std::vector<GuestTransferP> GuestTransferPs;
    typedef std::vector<AccountTransferP> AccountTransferPs;
    typedef std::vector<ArticleTransferP> ArticleTransferPs;
    User() { ; }
    virtual ~User() { ; }
    // Properties
    long _id;
    QString _name;
    QString _password;
    QDateTime _lastLogin;
    UserRolePs _userRoles;
    AccountTransferPs _accountTransfers;
    ArticleTransferPs _articleTransfers;
    GuestTransferPs _guestTransfers;

    bool hasPrivilege(UserRole::Privilege);
};

QX_REGISTER_HPP_BAROLI_COMMON(User,qx::trait::no_base_class_defined, 0)


#endif // USER_H
