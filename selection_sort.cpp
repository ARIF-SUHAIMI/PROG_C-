#include <iostream>

using namespace std;

void swap(int &x,int &y,int &s)
{
    s++;
    int temp=x;
    x=y;
    y=temp;
}
void selectionsort(int data[],int n)
{
    int cmp;
    int swp;
    for(int last=n-1;last>=1;--last)
    {
        cmp=0;
        swp=0;
        int largindex=0; 
        for(int p=1;p<=last;++p)
        {
            cmp++;
            if(data[p]<data[largindex])
                largindex=p;
        }
        swap(data[largindex],data[last],swp);
        for(int k=0;k<last;k++)
        {
            cout<<endl;
            cout<<"pass: "<<k+1<<endl;
            cout<<"last = "<<n-(k+1)<<endl;
            for(int m=0;m<last;m++)
            {
                cout<<"p = "<<m+1<<"| largindex = "<<largindex<<endl;
            }
            for(int d=0;d<n;d++)
            {
                cout<<data[d]<<" ";
            }
        }
        cout<<endl;
        cout<<"compare = "<<cmp<<endl;
        cout<<"swap = "<<swp<<endl;
    }
}



int main()
{
    int b[]={4,2,6,5,1};
    selectionsort(b,5);
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<endl;
    }
    system("PAUSE");
    return 0;
}