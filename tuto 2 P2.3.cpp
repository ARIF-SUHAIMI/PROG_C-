/*
#                            TUTO Q3
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
#include <string>
using namespace std;

ifstream inp("inve.txt");

class inventory
{
    string itemname;
    string itemkod;
    float itemprice;
    int qttyinstock;
    float totalearned;

    public:
        inventory()
        {
            itemname="";
            itemkod="";
            itemprice=0.0;
            qttyinstock=0;
            totalearned=0.0;
        }
        string getkod()
        {
            return itemkod;
        }
        void getdata()
        {
            string t1;
            getline(inp,itemname,',');
            getline(inp,itemkod,',');
            getline(inp,t1,',');
            inp>>qttyinstock;
            itemprice=stof(t1);
        }
        void buy(int k)
        {
            int b;
            qttyinstock-=k;
            totalearned=totalearned+(itemprice*k);
        }
        void addstock()
        {
            int b=0;
            cout<<"please enter quantity that you want to add : ";
            cin>>b;
            qttyinstock+=b;
        }
        void discountprice()
        {
            float disc=0.0;
            cout<<"please Enter the discount rate in precentage without '%' symbol: ";
            cin>>disc;
            itemprice=itemprice*((100-disc)/100);
        }
        void printdetail()
        {
            cout<<setw(15)<<itemname
                <<setw(8)<<itemprice
                <<setw(8)<<itemkod
                <<setw(15)<<qttyinstock
                <<totalearned<<endl;
        }
};

void read(inventory inv[])
{
    for(int i=0;i<5;i++)
    {
        inv[i].getdata();
    }
}

void print(inventory inv[])
{
    cout<<endl<<endl;
    cout<<left;
    cout<<setw(15)<<"ITEM"
    <<setw(8)<<"PRICE"
    <<setw(8)<<"CODE"
    <<setw(15)<<"Quantity"
    <<"TOTAL EARNED"<<endl;
    for(int y=0;y<5;y++)
    {
        inv[y].printdetail();
    }
    cout<<endl<<endl;
}

bool beli(inventory inv[])
{
    cout<<endl<<endl;
    string c;
    int b;
    bool v=false;
    cout<<"Please enter the item code that you want to buy : ";
    cin>>c;
    for(int u=0;u<5;u++)
    {
        if(c==inv[u].getkod())
        {
            cout<<"please enter quantity that you want to buy : ";
            cin>>b;
            inv[u].buy(b);
            v=true;
            break;
        }
        else
            continue;
    }
    return v;
}

bool add(inventory inv[])
{
    cout<<endl<<endl;
    string c;
    cout<<"Please enter the item code that you want to add : ";
    cin>>c;
    bool v=false;
    for(int u=0;u<5;u++)
    {
        if(c==inv[u].getkod())
        {
            inv[u].addstock();
            v=true;
            break;
        }
        else
            continue;
    }
    return v;
}

bool dis(inventory inv[])
{
    cout<<endl<<endl;
    string c;
    cout<<"Please enter the item code that you want to discount : ";
    cin>>c;
    bool v=false;
    for(int u=0;u<5;u++)
    {
        if(c==inv[u].getkod())
        {
            inv[u].discountprice();
            v=true;
            break;
        }
        else
            continue;
    }
    return v;
}

void menu()
{
    cout<<"====MENU===="<<endl
        <<"1. Buy item"<<endl
        <<"2. Add item"<<endl
        <<"3. Print all item"<<endl
        <<"4. Discount on item"<<endl
        <<"5. Exit"<<endl
        <<"please choose :";
}

int main()
{
    inventory inv[5];
    read(inv);
    inp.close();
    int ii=0;
    bool check,check2,check3;
    do
    {
        menu();
        cin>>ii;
        switch (ii)
        {
        case 1:
            check=beli(inv);
            if(check==false)
                cout<<"INCORRECT CODE"<<endl;
            cout<<endl<<endl;
            break;
        case 2:
            check2=add(inv);
            if(check2==false)
                cout<<"INCORRECT CODE"<<endl;
                cout<<endl<<endl;
            break;
        case 3:
            print(inv);
            break;
        case 4:
            check3=dis(inv);
            if(check3==false)
                cout<<"INCORRECT CODE"<<endl;
            cout<<endl<<endl;
            break;
        }
    } while (ii!=5);
    cout<<endl<<endl;
    cout<<"THANK YOU FOR USING THIS PROGRAM"<<endl;
    system("PAUSE");
    return 0;
}