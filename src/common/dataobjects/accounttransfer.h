#ifndef ACCOUNT_TRANSFER_H
#define ACCOUNT_TRANSFER_H

class User;
class Account;

class QX_BAROLI_COMMON_DLL_EXPORT AccountTransfer
{
public:
    typedef boost::shared_ptr<User> UserP;
    typedef boost::shared_ptr<Account> AccountP;

    AccountTransfer() { ; }
    virtual ~AccountTransfer() { ; }

    long _id;
    QString _description;
    long _amount;
    AccountP _account;
    UserP _user;
    QDateTime _timestamp;

    long balance();
};

QX_REGISTER_HPP_BAROLI_COMMON(AccountTransfer,qx::trait::no_base_class_defined, 0)

#endif // ACCOUNT_TRANSFER_H
