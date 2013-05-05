#ifndef ARTICLE_H
#define ARTICLE_H

class Category;
class ArticleTransfer;

class QX_BAROLI_COMMON_DLL_EXPORT Article
{
public:
    // types
    typedef boost::shared_ptr<Category> CategoryP;
    typedef qx::QxCollection<long,CategoryP> CategoryPs;
    typedef boost::shared_ptr<ArticleTransfer> ArticleTransferP;
    typedef std::vector<ArticleTransferP> ArticleTransferPs;

    // constructor and destructor
    Article() { ; }
    virtual ~Article() { ; }

    // Properties
    long _id;
    QString _name;
    QString _description;
    QString _comment;
    QString _iconPath;
    long _salePrice;
    double _saleUnit;
    long _upperLimit;
    long _lowerLimit;
    CategoryPs _categories;
    ArticleTransferPs _transfers;

    long stock();

};

QX_REGISTER_HPP_BAROLI_COMMON(Article, qx::trait::no_base_class_defined, 0)

typedef boost::shared_ptr<Article> ArticleP;
typedef qx::QxCollection<long,ArticleP> ArticlePs;
typedef boost::shared_ptr<ArticlePs> ArticlePsP;

#endif // ARTICLE_H
