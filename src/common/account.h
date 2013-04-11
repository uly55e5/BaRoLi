#ifndef ACCOUNT_H
#define ACCOUNT_H

class QX_BAROLI_COMMON_DLL_EXPORT Account
{

public:

    enum AccountType  { Cash, Virtual, Bank };

    Account();
    virtual ~Account();

    long m_id;
    QString m_name;
    QString m_description;
    AccountType m_type;


};

QX_REGISTER_HPP_BAROLI_COMMON(Account,qx::trait::no_base_class_defined, 0)


#endif // ACCOUNT_H
