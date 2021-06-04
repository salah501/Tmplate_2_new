#ifndef PUBLICATION_H
#define PUBLICATION_H
#include <iostream>
using namespace std;

class Publication
{
private:
    string title;
    float price;
public:
    Publication()
    {
        title="unknown";
        price=0;
    }
    Publication(string t,float p)
    {
        title=t;
        price=p;
    }
    void setTitle(string t)
    {
        title=t;
    }
    void setPrice(float p)
    {
        price=p;
    }
    string getTitle()
    {
        return title;
    }
    float getPrice()
    {
        return price;
    }
    virtual void printInfo()
    {
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Price : "<<getPrice()<<endl;
    }
};

#endif // PUBLICATION_H
