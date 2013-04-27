#ifndef ARTICLETRANSFER_H
#define ARTICLETRANSFER_H

class Article;
class User;

class QX_BAROLI_COMMON_DLL_EXPORT ArticleTransfer
{
public:
    typedef boost::shared_ptr<User> UserP;
    typedef boost::shared_ptr<Article> ArticleP;

    ArticleTransfer();
    virtual ~ArticleTransfer();

    long _id;
    QString _description;
    long _amount;
    ArticleP _article;
    UserP _user;
    QDateTime _timestamp;
};

QX_REGISTER_HPP_BAROLI_COMMON(ArticleTransfer,qx::trait::no_base_class_defined, 0)

#endif // ARTICLETRANSFER_H
