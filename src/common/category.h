#ifndef CATEGORY_H
#define CATEGORY_H

class Article;

class QX_BAROLI_COMMON_DLL_EXPORT Category
{
public:
    typedef boost::shared_ptr<Article> article_ptr;
    typedef std::vector<article_ptr> list_article;
    Category();
    virtual ~Category();
    // Propterties
    long m_id;
    QString m_name;
    QString m_description;
    QString m_iconPath;
    list_article m_articleX;
};

QX_REGISTER_HPP_BAROLI_COMMON(Category,qx::trait::no_base_class_defined, 0)

#endif // CATEGORY_H
