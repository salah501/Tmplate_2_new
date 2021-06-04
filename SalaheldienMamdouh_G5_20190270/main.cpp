#include <iostream>
#include <Publication.h>
#include <Book.h>
#include <Tape.h>
using namespace std;

int main()
{
    Book b("The 100",26.9,1200);
    b.printInfo();

    cout<<""<<endl;

    Tape t("Work hard",38.8,12);
    t.printInfo();
    return 0;
}
