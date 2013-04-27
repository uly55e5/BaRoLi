#ifndef ACCOUNT_H
#define ACCOUNT_H

class AccountTransfer;
class User;

class QX_BAROLI_COMMON_DLL_EXPORT Account
{

public:

    enum AccountType  {Cash, Bank, Guest, Temp};
    typedef boost::shared_ptr<AccountTransfer> AccountTransferP;
    typedef std::vector<AccountTransferP> AccountTransferPs;
    typedef boost::shared_ptr<User> UserP;

    Account();
    virtual ~Account();

    long _id;
    QString _name;
    QString _description;
    AccountType _type;
    AccountTransferPs _transfers;
    UserP _user;


};

QX_REGISTER_HPP_BAROLI_COMMON(Account,qx::trait::no_base_class_defined, 0)


#endif // ACCOUNT_H
