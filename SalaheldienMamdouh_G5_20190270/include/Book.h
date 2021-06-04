#ifndef BOOK_H
#define BOOK_H


class Book : public Publication
{
private:
    int pageCount;
public:
    Book()
    {
        pageCount=0;
    }
    Book(string t,float p,int pc):Publication(t,p)
    {
        pageCount=pc;
    }
    void setPageCount(int pc)
    {
        pageCount=pc;
    }
    int getPageCount()
    {
        return pageCount;
    }
    void printInfo()
    {
        Publication::printInfo();
        cout<<"Page Count : "<<getPageCount()<<endl;
    }
};

#endif // BOOK_H
