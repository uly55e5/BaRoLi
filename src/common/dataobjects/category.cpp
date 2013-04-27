#include "precompiled.h"
#include "category.h"

#include <QxMemLeak.h>

#include "article.h"

QX_REGISTER_CPP_BAROLI_COMMON(Category)

namespace qx {

    template <> void register_class(QxClass<Category> & t)
    {
        t.id(& Category::_id, "category_id");
        t.data(& Category::_name, "name");
        t.data(& Category::_description, "description");
        t.data(& Category::_iconPath, "icon_path");
        t.relationManyToMany(& Category::_articles,"list_article","category_article","category_id","article_id");
    }
}

