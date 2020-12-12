#include <iostream>
const int SIZE=8;

using namespace std;
void mergesort(int [],int ,int );
void merge(int [],int ,int ,int );

int main()
{
    int app[]={7,6,9,8,3,11,10,4};
    mergesort(app,0,7);
    system("PAUSE");
    return 0;
}

void mergesort(int array[],int y,int uj)
{
    if(y<uj)
    {
        int m=(y+uj)/2;
        cout<<endl;
        cout<<"mergesort(theArray,"<<y<<","<<uj<<")"<<endl;
        cout<<"Your Data : ";
        for(int j=y;j<uj+1;j++)
        {
            cout<<array[j]<<" ";
        }
        cout<<endl;
        mergesort(array,y,m);
        mergesort(array,m+1,uj);
        merge(array,y,m,uj);
    }
}

void merge(int theArray[],int y1,int m1,int uj1)
{
    int tempArray[SIZE];
    int f1=y1;
    int l1=m1;
    int f2=m1+1;
    int l2=uj1;
    int index=y1;
    for (;(f1<=l1)&&(f2<=l2);++index)
    {
        if (theArray[f1] < theArray[f2])
        { 
            tempArray[index] = theArray[f1];
            ++f1;
        }
        else
        { 
            tempArray[index] = theArray[f2];
            ++f2; 
        }
    }
    for (;f1<=l1;++f1,++index)
        tempArray[index] = theArray[f1];
    for (; f2 <= l2; ++f2, ++index)
        tempArray[index] = theArray[f2];
    for (index = y1; index <= uj1; ++index)
        theArray[index] = tempArray[index];
    cout<<"merge(theArray,"<<y1<<","<<m1<<","<<uj1<<")"<<endl;
    cout<<"Your Data : ";
    for(int j=y1;j<uj1+1;j++)
    {
        cout<<theArray[j]<<" ";
    }
    cout<<endl<<"--------------------------------"<<endl;
}