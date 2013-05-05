#ifndef GUEST_H
#define GUEST_H

class GuestTransfer;

class QX_BAROLI_COMMON_DLL_EXPORT Guest
{
public:
    typedef boost::shared_ptr<GuestTransfer> GuestTransferP;
    typedef std::vector<GuestTransferP> GuestTransferPs;

    Guest() { ; }
    virtual ~Guest() { ; }
    // Properties
    long _id;
    QString _name;
    GuestTransferPs _guestTransfers;

    long balance();
    long freeDrinks();
};

QX_REGISTER_HPP_BAROLI_COMMON(Guest,qx::trait::no_base_class_defined, 0)



#endif // GUEST_H
