#include "precompiled.h"
#include "article.h"

#include <QxMemLeak.h>

#include "category.h"
#include "articletransfer.h"

QX_REGISTER_CPP_BAROLI_COMMON(Article)

namespace qx {

template <> void register_class(QxClass<Article> & t)
{
    t.id(& Article::_id, "article_id");
    t.data(& Article::_name, "name");
    t.data(& Article::_description, "description");
    t.data(& Article::_comment, "comment");
    t.data(& Article::_iconPath, "icon_path");
    t.data(& Article::_salePrice, "sale_price");
    t.data(& Article::_upperLimit, "upper_limit");
    t.data(& Article::_lowerLimit, "lower_limit");
    t.relationManyToMany(& Article::_categories, "list_category","category_article","article_id","category_id");
    t.relationOneToMany(& Article::_transfers, "list_transfer", "article_id");
}}
