#include "precompiled.h"
#include "category.h"
#include "article.h"

#include <QxMemLeak.h>

QX_REGISTER_CPP_BAROLI_COMMON(Category)

namespace qx {

    template <> void register_class(QxClass<Category> & t)
    {
        t.id(& Category::m_id, "category_id");
        t.data(& Category::m_name, "name");
        t.data(& Category::m_description, "description");
        t.data(& Category::m_iconPath, "icon_path");
        t.relationManyToMany(& Category::m_articleX,"list_article","category_article","category_id","article_id");
    }
}

