#ifndef GUEST_H
#define GUEST_H

#include <QString>

class Guest
{
public:
    Guest();
    virtual ~Guest();
    // Properties
    QString m_name;
    // TODO Freedrinks
    // TODO Balance
};

#endif // GUEST_H
