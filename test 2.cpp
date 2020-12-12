// Overload constructor
#include <iostream>
#include <string>
using namespace std;
class date
{   int day,year,month;
    string month2;
    public:
    //overload constructor definition
    date(int a=11, string b="November", int c=11, int d=2020);
    date(int);
    void print();
};
// constructor implementation
date::date(int a)
{   day = 18;
    month = 10;
    month2 = "October";
    year = a;
}
date::date(int a, string b, int c, int d)
{   day = a;
    month2 = b;
    month = c;
    year = d;
}
void date::print()
{
     cout << "\nDate is : " << day << "-" << month << "-" << year<<endl;
     cout << "\nDate is : " << day << "-" << month2 << "-" << year<<endl;
}
main()
{
date NewSemDate;
 // declare instance of date using default argument
 NewSemDate.print();
 system("PAUSE");
 return 0;
}