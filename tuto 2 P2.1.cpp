/*
#                            TUTO Q1
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

void menu();

class account
{
    private:
        string accountname;
        string accountnumber;
        int accounttype;
        float accountbalance;
    
    public:
        account(string an="User",string anm="NOACCOUNT",int at=2,float ab=0.0)
        {
            accountname=an;
            accountnumber=anm;
            accounttype=at;
            accountbalance=ab;
        }
        void setname(string n)
        {
            accountname=n;
        }
        void setnumber(string n)
        {
            accountnumber=n;
        }
        void settype(int t)
        {
            accounttype=t;
        }
        void setbalance(float b)
        {
            accountbalance=b;
        }
        string getname()
        {
            return accountname;
        }
        string getnumber()
        {
            return accountnumber;
        }
        int gettype()
        {
            return accounttype;
        }
        float getbalance()
        {
            return accountbalance;
        }
        void withdraw(float f)
        {
            if((accountbalance>0)&&((f<accountbalance)&&(f>0)))
            {
                accountbalance-=f;
                cout<<left<<"Withdraw : RM "<<f<<endl;
                cout<<"ACCOUNT BALANCE : RM "<<accountbalance<<endl;
            }
            else
            {
                cout<<left<<"Insufficient balance!!!"<<endl;
            }
        }
        void deposit(float ff)
        {
            accountbalance+=ff;
            cout<<left<<"Your balance : RM "<<accountbalance<<endl;
        }
        void printdetail()
        {
            cout<<left<<setw(20)
            <<accountname<<setw(15)
            <<accountnumber<<setw(19)
            <<accounttype<<accountbalance<<endl;
        }
        void transfer(account &a)
        {
            float b=0.0;
            cout<<"Please enter the ammount : ";
            cin>>b;
            if(accountbalance>=b)
            {
                a.accountbalance+=b;
                accountbalance-=b;
            }
            else
                cout<<"INSUFFICIENT ACCOUNT BALANCE!"<<endl;
        }
};

void read(account v[])
{
    ifstream inp("testdata.txt");
    int i=0;
    string n,nn;
    int ii=0;
    float fg=0.0;
    while(!inp.eof())
    {
        getline(inp,n,',');
        getline(inp,nn,',');
        inp>>ii;
        inp.ignore(2,',');
        inp>>fg;
        v[i].setname(n);
        v[i].setnumber(nn);
        v[i].settype(ii);
        v[i].setbalance(fg);
        i++;
    }
}

bool balance(account ar[])
{
    string an;
    bool v=false;
    cout<<endl<<endl<<"PLEASE ENTER ACCOUNT NUMBER : ";
    cin>>an;
    for(int t=0;t<10;t++)
    {
        if(an==ar[t].getnumber())
        {
            cout<<"======Account Balance======"<<endl;
            cout<<"RM "<<ar[t].getbalance()<<endl;
            v=true;
            break;
        }
        else
            continue;
    }
    return v;
}

bool with(account ar[])
{
    string an;
    bool v=false;
    float f=0.0;
    cout<<endl<<endl<<"PLEASE ENTER ACCOUNT NUMBER : ";
    cin>>an;
    for(int t=0;t<10;t++)
    {
        if(an==ar[t].getnumber())
        {
            cout<<"ENTER THE AMMOUNT: ";
            cin>>f;
            ar[t].withdraw(f);
            v=true;
            break;
        }
        else
            continue;
    }
    return v;
}

bool depo(account ar[])
{
    string an;
    bool v=false;
    float f=0.0;
    cout<<endl<<endl<<"PLEASE ENTER ACCOUNT NUMBER : ";
    cin>>an;
    for(int t=0;t<10;t++)
    {
        if(an==ar[t].getnumber())
        {
            cout<<"ENTER THE AMMOUNT: ";
            cin>>f;
            ar[t].deposit(f);
            v=true;
            break;
        }
        else
            continue;
    }
    return v;
}

int main()
{
    account ar[10];
    account a1("Ahmad Shamsul","1232435678",1,20500.90),a2("Salim","989877665654");
    int cou=0;
    bool ch,ch1,ch2;
    read(ar);
    do
    {
        menu();
        cin>>cou;
        switch (cou)
        {
            case 1:
                ch=balance(ar);
                if(ch==false)
                    cout<<"ACCOUNT NOT FOUND"<<endl;
                cout<<endl<<endl;
                break;
            case 2:
                ch1=with(ar);
                if(ch1==false)
                    cout<<"ACCOUNT NOT FOUND"<<endl;
                cout<<endl<<endl;
                break;
            case 3:
                ch2=depo(ar);
                if(ch2==false)
                    cout<<"ACCOUNT NOT FOUND"<<endl;
                cout<<endl<<endl;
                break;
            case 4:
                cout<<endl<<endl;
                cout<<left<<setw(20)
                    <<"Name"<<setw(15)
                    <<"Account Number"<<setw(19)
                    <<"Account Type"<<"Account Balance"<<endl;
                for(int p=0;p<10;p++)
                {
                    ar[p].printdetail();
                }
                cout<<endl<<endl;
                break;
            case 5:
                cout<<endl<<endl<<"Enter 1st user account number :";
                string s1,s2;
                int coun1,coun2;
                bool a1=false,a2=false;
                cin>>s1;
                for(int j=0;j<10;j++)
                {
                    if((s1==ar[j].getnumber()))
                    {
                        coun1=j;
                        a1=true;
                    }
                        
                }
                cout<<"Enter 2nd user account number :";
                cin>>s2;
                for(int j=0;j<10;j++)
                {
                    if((s2==ar[j].getnumber()))
                    {
                        coun2=j;
                        a2=true;
                    }
                        
                }
                if((a1!=true)||(a2!=true))
                {
                    cout<<"ACCOUNT NOT FOUND"<<endl;
                    continue;
                }
                ar[coun1].transfer(ar[coun2]);
                cout<<endl<<endl;
                break;
        }
    } while (cou!=6);
    system("PAUSE");
    return 0;
}

void menu()
{
    cout<<left<<"======MENU======"<<endl<<endl;
    cout<<"1. Account Balance"<<endl
        <<"2. Withdraw money"<<endl
        <<"3. Deposit money"<<endl
        <<"4. Print account details"<<endl
        <<"5. Transfer"<<endl
        <<"6. Exit"<<endl<<endl;
    cout<<"Please choose : ";
}