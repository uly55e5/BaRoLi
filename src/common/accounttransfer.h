#ifndef ACCOUNT_TRANSFER_H
#define ACCOUNT_TRANSFER_H

class User;
class Account;

class QX_BAROLI_COMMON_DLL_EXPORT AccountTransfer
{
public:
    typedef boost::shared_ptr<User> user_ptr;
    typedef boost::shared_ptr<Account> account_ptr;

    AccountTransfer();
    virtual ~AccountTransfer();

    long m_id;
    QDateTime m_timestamp;
    QString m_description;
    user_ptr m_user;
    long m_amount;
    account_ptr m_account;

    long balance();
};

QX_REGISTER_HPP_BAROLI_COMMON(AccountTransfer,qx::trait::no_base_class_defined, 0)

#endif // ACCOUNT_TRANSFER_H
