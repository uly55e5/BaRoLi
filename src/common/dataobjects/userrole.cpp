#include "precompiled.h"
#include "userrole.h"
#include "user.h"

#include <QxMemLeak.h>

QX_REGISTER_CPP_BAROLI_COMMON(UserRole)

namespace qx {
    template <> void register_class(QxClass<UserRole> & t)
    {
        t.id(& UserRole::_id, "user_role_id");
        t.data(& UserRole::_description, "description");
        t.data(& UserRole::_name, "name");
        t.relationManyToMany(& UserRole::_users,"list_user","user_role","user_role_id","user_id");
    }
}
