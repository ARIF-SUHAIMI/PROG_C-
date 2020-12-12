
/*
#                            TUTO Q4
# TEAMMATES    : ARIF BIN SUHAIMI
# LECTURER     : Ms. LIZAWATI BINTI MI YUSUF 
# YEAR COURSE  : 1 SECR
# CODE         : SECJ2013 / SEC 03
# SEMESTER     : 3
# DATE         : 1 NOVEMBER 2020
# VENUE        : HOME
*/
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class flight
{
    string destination;
    int no_passenger;
    int capacity;
    string status;
    float ticketprice;
    int totalpayment;

    public:
        flight(string s="KAJANG",int c=250,int np=150,float ti=90.50)
        {
            totalpayment=0.0;
            destination=s;
            capacity=c;
            no_passenger=np;
            ticketprice=ti;
        }
        void book(int j,string l)
        {
            if(l=="senior citizen")
            {
                totalpayment+=(ticketprice/2)*j;
            }
        }
        void cancel(int j)
        {
            no_passenger-=j;
            totalpayment-=((ticketprice/2)*j);
        }
        void checkdetail()
        {
            cout<<"Destination : "<<destination<<endl
                <<"No. of Passenger : "<<no_passenger<<endl
                <<"Ticket Price : "<<ticketprice<<endl
                <<"Total Payment : "<<totalpayment<<endl<<endl<<endl;
        }
};

int main()
{
    flight *flight1 = new flight("Kuching",150,120.00,50);
	flight *flight2 = new flight();
	flight1->book(20,"senior citizen");
    flight1->checkdetail();
	flight1->cancel(2);
	flight1->checkdetail();
	free(flight1);
	free(flight2);

    system("PAUSE");
    return 0;
}