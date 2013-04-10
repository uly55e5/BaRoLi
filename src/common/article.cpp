#include "precompiled.h"
#include "article.h"
#include "category.h"

#include <QxMemLeak.h>


QX_REGISTER_CPP_BAROLI_COMMON(Article)

namespace qx {


template <> void register_class(QxClass<Article> & t)
{
    t.id(& Article::m_id, "article_id");
    t.data(& Article::m_name, "name");
    t.data(& Article::m_description, "description");
    t.data(& Article::m_comment, "comment");
    t.data(& Article::m_iconPath, "icon_path");
    t.data(& Article::m_salePrice, "sale_price");
    t.data(& Article::m_stock, "stock");
    t.relationManyToMany(& Article::m_categoryX, "list_category","category_article","article_id","category_id");
}}
