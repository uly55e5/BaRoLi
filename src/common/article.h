#ifndef ARTICLE_H
#define ARTICLE_H

#include <QString>

class Article
{
public:
    Article();
    virtual ~Article();
    // Properties
    long m_id;
    QString m_name;
    QString m_description;
    QString m_comment;
    QString m_iconPath;
    long m_salesPrice;
    long m_stock;
    // TODO Transactions
    // TODO Categories
};

#endif // ARTICLE_H
