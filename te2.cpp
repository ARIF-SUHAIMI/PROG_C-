#include <iostream>
using namespace std;

void print(int,int,int);

int main()
{
    print(1,0,5);
    system("PAUSE");
    return 0;
}

void print(int x,int y,int t)
{
    if(x<=t) 
    {
        if(y<x) 
        {
            cout<<"#";
            print(x,y+1,t);
        }
        else 
        {
            cout<<endl;
            print(x+1,0,t);
        }
    }
}
