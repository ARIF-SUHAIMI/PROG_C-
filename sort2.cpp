/*
sort our data
: to make it easy to analyse and search
example, sort ascending order, phone directory and dictionary
        sort in descending order; number of scores/ points

internal sort : require the collection of data fit entirely in the computers's main memory suitable to sort small
external sort : 
*/

#include <iostream>

using namespace std;

void BubbleSort(int app[],int n,int &cm,int &ex)
{
    int f,g;
    int tempvalue;
    bool sorted=false;
    for(int pass=1;(pass<n)&&!sorted;++pass)
    {
        f=0;
        g=0;
        sorted=true;
        cout<<endl<<"Pass: "<<pass;
        for(int x=0;x<n-pass;++x)
        {
            cm++;
            f++;
            cout<<endl<<"x = "<<x<<" | ";
            if(app[x]>app[x+1])
            {
                ex++;
                g++;
                tempvalue=app[x];
                app[x]=app[x+1];
                app[x+1]=tempvalue;
                sorted=false;
            }
        for(int b=0;b<n;b++)
        {
            cout<<app[b]<<" ";
        }
        }
        cout<<endl;  
        cout<<endl<<"No. of compare: "<<f<<endl;
        cout<<"No. of swap: "<<g<<endl;
    }
}

int main()
{
    int cm=0,ex=0;
    int app[]={22,14,9,5,2};
    BubbleSort(app,5,cm,ex);
    cout<<endl;
    cout<<"Total number of compare: "<<cm<<endl;
    cout<<"Total Number of swap   : "<<ex<<endl;

    for(int l=0;l<5;l++)
    {
        cout<<app[l]<<endl;
    }  
    system("PAUSE");
    return 0;
}