#ifndef GUESTTRANSFER_H
#define GUESTTRANSFER_H

class User;
class Guest;

class QX_BAROLI_COMMON_DLL_EXPORT GuestTransfer
{
public:
    typedef boost::shared_ptr<Guest> GuestP;
    typedef boost::shared_ptr<User> UserP;

    GuestTransfer() { ; }
    virtual ~GuestTransfer() { ; }

    long _id;
    QString _description;
    long _freeDrinks;
    long _amount;
    GuestP _guest;
    UserP _user;
    QDateTime _timestamp;
};

QX_REGISTER_HPP_BAROLI_COMMON(GuestTransfer,qx::trait::no_base_class_defined, 0)


#endif // GUESTTRANSFER_H
