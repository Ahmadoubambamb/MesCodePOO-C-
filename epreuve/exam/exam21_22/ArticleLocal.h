#ifndef ARTICLELOCAL_H_
#define ARTICLELOCAL_H_
#include "Article.h"

class ArticleLocal:public Article
{private:
    double cout_transp;
public:
    ArticleLocal(const string&,const string&,double,double);
    virtual ~ArticleLocal(){};
   ostream& afficher(ostream&) const;
    double prix();
};

#endif
