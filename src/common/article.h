#ifndef ARTICLE_H
#define ARTICLE_H

class Category;

class QX_BAROLI_COMMON_DLL_EXPORT Article
{
public:
    // types
    typedef boost::shared_ptr<Category> category_ptr;
    typedef std::vector<category_ptr> list_category;
    // constructor and destructor
    Article();
    virtual ~Article();
    // Properties
    long m_id;
    QString m_name;
    QString m_description;
    QString m_comment;
    QString m_iconPath;
    long m_salePrice;
    long m_stock;
    list_category m_categoryX;
    // TODO Transactions
};

QX_REGISTER_HPP_BAROLI_COMMON(Article, qx::trait::no_base_class_defined, 0)


#endif // ARTICLE_H
