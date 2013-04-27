#include "precompiled.h"
#include "guest.h"

#include <QxMemLeak.h>

#include "guesttransfer.h"

QX_REGISTER_CPP_BAROLI_COMMON(Guest)

namespace qx {
    template <> void register_class(QxClass<Guest> & t)
    {
        t.id(& Guest::_id, "guest_id");
        t.data(& Guest::_name, "name");
        t.relationOneToMany(& Guest::_guestTransfers, "transfer_list", "guest_id");
    }
}
