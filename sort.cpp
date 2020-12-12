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

void BubbleSort(int app[],int listsize,int &ex,int &cm)
{
    int f,g;
    int pass;
    int tempvalue;
    for(pass=1;pass<listsize;pass++)
    {
        f=0;g=0;
        cout<<endl<<"PASS: "<<pass;
        for(int x=0;x<listsize-pass;x++)
        {
            cm++;
            f++;
            cout<<endl<<"X = "<<x<<" | ";
            if(app[x]<app[x+1])
            {
                ex++;
                g++;
                tempvalue=app[x];
                app[x]=app[x+1];
                app[x+1]=tempvalue;
            }
            for(int b=0;b<listsize;b++)
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
    int app[]={4,2,6,5,1};
    int ex=0,cm=0;
    BubbleSort(app,5,ex,cm);
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