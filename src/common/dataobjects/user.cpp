#include "precompiled.h"
#include "user.h"

#include <QxMemLeak.h>

#include "accounttransfer.h"
#include "articletransfer.h"
#include "guesttransfer.h"

QX_REGISTER_CPP_BAROLI_COMMON(User)


namespace qx {

    template <> void register_class(QxClass<User> & t)
    {
        t.id(& User::_id, "user_id");
        t.data(& User::_name, "name");
        t.data(& User::_password, "pwd_hash");
        t.data(& User::_lastLogin, "last_login");
        t.relationManyToMany(& User::_userRoles, "list_role", "user_role","user_id","role_id");
        t.relationOneToMany(& User::_accountTransfers, "list_account_transfer","user_id");
        t.relationOneToMany(& User::_articleTransfers, "list_article_transfer","user_id");
        t.relationOneToMany(& User::_guestTransfers,"list_guest_transfer", "user_id");
    }
}
