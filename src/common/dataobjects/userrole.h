#ifndef USERROLE_H
#define USERROLE_H

class User;

class UserRole
{
public:
    enum Privilege {Bar=1, Buy=4, Sale=8, Report=16, Useradmin=32, Admin=255};
    typedef boost::shared_ptr<User> UserP;
    typedef qx::QxCollection<long,UserP> UserPs;

    UserRole() { ; }
    virtual ~UserRole() { ; }

    long _id;
    QString _name;
    QString _description;
    UserPs _users;
    long _privileges;

    bool hasPrivilege(Privilege);

};

QX_REGISTER_HPP_BAROLI_COMMON(UserRole,qx::trait::no_base_class_defined, 0)

#endif // USERROLE_H
