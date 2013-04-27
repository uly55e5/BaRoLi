#include "precompiled.h"
#include "guesttransfer.h"
#include "guest.h"
#include "user.h"

#include <QxMemLeak.h>

QX_REGISTER_CPP_BAROLI_COMMON(GuestTransfer)

namespace qx {
    template <> void register_class(QxClass<GuestTransfer> & t)
    {
        t.id(& GuestTransfer::_id, "guest_transfer_id");
        t.data(& GuestTransfer::_description, "description");
        t.data(& GuestTransfer::_amount, "amount");
        t.data(& GuestTransfer::_freeDrinks, "free_drinks");
        t.data(& GuestTransfer::_timestamp, "timestamp");
        t.relationManyToOne(& GuestTransfer::_guest, "guest_id");
        t.relationManyToOne(& GuestTransfer::_user, "user_id");
    }
}
