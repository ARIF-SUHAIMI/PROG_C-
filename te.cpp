#include <iostream>

using namespace std;

int power(int n,int m)
{
    int temp=n;
    for(int k=0;k<m-1;k++)
    {
        n*=temp;
    }
    return n;
}
int main()
{
    cout<<power(2,4);
    system("PAUSE");
    return 0;
}