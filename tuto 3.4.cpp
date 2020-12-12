#include <iostream>

using namespace std;
void print(int ,int);


int main()
{
    cout<<"Enter number of rows: ";
    int num;
    cin>>num;
    print(1,num);

    system("PAUSE");
    return 0;
}
void print(int n,int num)
{
    int i=n;
    if(i<num+1)
    {
        int k=0;
        while(k<i)
        {
            cout<<"#";
            k++;
        }
        cout<<endl;
        i++;
        print(i,num);
    }
    else
        return;
}