#include "precompiled.h"
#include "account.h"

#include <QxMemLeak.h>

#include "accounttransfer.h"
#include "user.h"

QX_REGISTER_CPP_BAROLI_COMMON(Account)

namespace qx {
    template <> void register_class(QxClass<Account> & t)
    {
        t.id(& Account::_id, "account_id");
        t.data(& Account::_name, "name");
        t.data(& Account::_description, "description");
        t.data(& Account::_type, "type");
        t.relationOneToMany(& Account::_transfers,"list_transfer","account_id");
        t.relationManyToOne(& Account::_user, "user_id");
    }
}
