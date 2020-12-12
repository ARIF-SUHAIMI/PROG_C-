// Constructor with default argument
#include <iostream>
#include <string>
using namespace std;
class date
{ int day, year;
 string month;
public:
date(int a=21, string b="October", int c=2020);
void print();
};
date::date(int a, string b, int c)
{   day = a;
    month = b;  
    year = c;
}
void print()
{ cout << "The date is : " << day << "-" << month << "-" << year <<
endl;
}
main()
{
date birthDate; //date instance use default argument
 birthDate.print();
 system("PAUSE");
 return 0;
}