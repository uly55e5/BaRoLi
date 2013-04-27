#include "precompiled.h"
#include "articletransfer.h"

#include <QxMemLeak.h>

#include "user.h"
#include "article.h"

QX_REGISTER_CPP_BAROLI_COMMON(ArticleTransfer)

namespace qx {
    template <> void register_class(QxClass<ArticleTransfer> & t)
    {
        t.id(& ArticleTransfer::_id, "article_transfer_id");
        t.data(& ArticleTransfer::_description, "description");
        t.data(& ArticleTransfer::_amount, "amount");
        t.relationManyToOne(& ArticleTransfer::_article, "article_id");
        t.relationManyToOne(& ArticleTransfer::_user, "user_id");
        t.data(& ArticleTransfer::_timestamp, "timestamp");
    }

}
