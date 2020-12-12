// Implementation of destructor function
#include <iostream>
#include <string>
using namespace std;
class date1
{ int day, year;
 string month;
public:
// constructor with default argument
date1(int a=1, string b ="January", int c=2020);
// destructor
~date1();
void print();
};
// constructor implementation
date1::date1(int a, string b, int c)
{ day = a;
month = b;
 year = c;
}
date1::~date1()
 { cout << "Object with Date : " << day << "-" << month << "-"
<< year << " is destroyed" << endl;
 }
void date1::print()
{ cout << "The date is : " << day << "-" << month << "-" << year <<
endl;
}
main()
{
date1 NewSemDate(18, "October", 2020);
 NewSemDate.print();
date1 Test1Day(1,"December",2020);
 Test1Day.print();
 system("PAUSE");
 return 0;
}