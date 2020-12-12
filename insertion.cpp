#include <iostream>

using namespace std;

void insertion(int data[])
{
    int item;
    int pass;
    int index;
    int swap;
    int cmp;
    for(pass=1;pass<5;pass++)
    {
        cmp=0,swap=0;
        cmp++;
        item=data[pass];
        index=pass;
        while((index>0)&&(data[index-1]>item))      //tukar simbol > < untuk index-1
        {
            swap++;
            data[index]=data[index-1];
            index--;
        }
        data[index]=item;
        cout<<"compare= "<<cmp<<"  swap = "<<swap<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<data[i]<<" ";
        }
        cout<<endl<<endl;
    }
}

int main()
{
    int b[]={22,14,9,5,2};
    insertion(b);
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<endl;
    }
    system("PAUSE");
    return 0;
}