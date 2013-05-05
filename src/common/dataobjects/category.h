#ifndef CATEGORY_H
#define CATEGORY_H

class Article;

class QX_BAROLI_COMMON_DLL_EXPORT Category
{
public:
    typedef boost::shared_ptr<Article> ArticleP;
    typedef qx::QxCollection<long,ArticleP> ArticlePs;
    Category() { ; }
    virtual ~Category() { ; }
    // Propterties
    long _id;
    QString _name;
    QString _description;
    QString _iconPath;
    ArticlePs _articles;
};

QX_REGISTER_HPP_BAROLI_COMMON(Category,qx::trait::no_base_class_defined, 0)

#endif // CATEGORY_H
