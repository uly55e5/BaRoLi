#include "precompiled.h"
#include "account.h"
#include "accounttransfer.h"

#include <QxMemLeak.h>

QX_REGISTER_CPP_BAROLI_COMMON(Account)

namespace qx {
    template <> void register_class(QxClass<Account> & t)
    {
        t.id(& Account::m_id, "account_id");
        t.data(& Account::m_name, "name");
        t.data(& Account::m_description, "description");
        t.data(& Account::m_type, "type");
        t.relationOneToMany(& Account::m_transferX,"list_transfer","account_id");
    }
}
