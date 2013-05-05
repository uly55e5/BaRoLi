#ifndef ARTICLEMANAGER_H
#define ARTICLEMANAGER_H

#include "dataobjects/article.h"

class QX_BAROLI_COMMON_DLL_EXPORT ArticleManager
{
public:
    ArticleManager();
    QSqlError insert(ArticleP p);
    QSqlError update(ArticleP p);
    QSqlError remove(ArticleP p);
    QSqlError remove_all();
    QSqlError fetchById(ArticleP p);
    QSqlError fetchAll(ArticlePsP lst);


};

#endif // ARTICLEMANAGER_H
