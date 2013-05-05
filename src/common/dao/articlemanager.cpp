#include "articlemanager.h"

ArticleManager::ArticleManager()
{
}

QSqlError ArticleManager::insert(ArticleP p)
{
    if (! p) { return QSqlError("cannot insert article : invalid article (null pointer)", "", QSqlError::UnknownError); }
    if (p->_name.trimmed().isEmpty()) { return QSqlError("cannot insert article : 'name' is required", "", QSqlError::UnknownError); }
    if (p->_salePrice < 0) { return QSqlError("cannot insert article : 'sale_price' has to be > 0", "", QSqlError::UnknownError); }
    if (p->_saleUnit < 0) { return QSqlError("cannot insert article : 'sale_unit' has to be > 0", "", QSqlError::UnknownError); }
    return qx::dao::insert(p);


}

QSqlError ArticleManager::update(ArticleP p)
{
    if (! p) { return QSqlError("cannot update article : invalid article (null pointer)", "", QSqlError::UnknownError); }
    if (p->_id == 0) { return QSqlError("cannot update article : 'id' is required", "", QSqlError::UnknownError); }
    if (p->_name.trimmed().isEmpty()) { return QSqlError("cannot update article : 'name' is required", "", QSqlError::UnknownError); }
    if (p->_salePrice < 0) { return QSqlError("cannot update article : 'sale_price' has to be > 0", "", QSqlError::UnknownError); }
    if (p->_saleUnit < 0) { return QSqlError("cannot update article : 'sale_unit' has to be > 0", "", QSqlError::UnknownError); }
    if (! qx::dao::exist(p)) { return QSqlError("cannot update article : user doesn't exist in database", "", QSqlError::UnknownError); }
    return qx::dao::update(p);
}

QSqlError ArticleManager::remove(ArticleP p)
{
    if (! p) { return QSqlError("cannot remove article : invalid article (null pointer)", "", QSqlError::UnknownError); }
    if (p->_id == 0) { return QSqlError("cannot remove article : 'id' is required", "", QSqlError::UnknownError); }
    if (! qx::dao::exist(p)) { return QSqlError("cannot remove article : user doesn't exist in database", "", QSqlError::UnknownError); }
    return qx::dao::delete_by_id(p);
}

QSqlError ArticleManager::remove_all()
{
    return qx::dao::delete_all<Article>();
}

QSqlError ArticleManager::fetchById(ArticleP p)
{
    if (! p) { return QSqlError("cannot fetch article : invalid article (null pointer)", "", QSqlError::UnknownError); }
    if (p->_id == 0) { return QSqlError("cannot fetch article : 'id' is required", "", QSqlError::UnknownError); }
    if (! qx::dao::exist(p)) { return QSqlError("cannot fetch article : user doesn't exist in database", "", QSqlError::UnknownError); }
    return qx::dao::fetch_by_id(p);
}

QSqlError ArticleManager::fetchAll(ArticlePsP lst)
{
    return qx::dao::fetch_all(lst);
}
