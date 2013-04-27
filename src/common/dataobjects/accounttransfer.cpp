#include "precompiled.h"
#include "accounttransfer.h"
#include "user.h"
#include "account.h"
#include <QxMemLeak.h>

QX_REGISTER_CPP_BAROLI_COMMON(AccountTransfer)


namespace qx {
    template <> void register_class(QxClass<AccountTransfer> & t)
    {
        t.id(& AccountTransfer::_id,"account_transfer_id");
        t.data(& AccountTransfer::_description, "description");
        t.data(& AccountTransfer::_amount, "amount");
        t.relationManyToOne(& AccountTransfer::_account, "account_id");
        t.relationManyToOne(& AccountTransfer::_user, "user_id");
        t.data(& AccountTransfer::_timestamp, "timestamp");
    }
}

