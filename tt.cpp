#include <iostream>

using namespace std;

int drw(int sum,int w)
{
    if(sum==1)
        return w;
    else if(sum==2)
        return drw(sum/w,sum-w);
    else
        return drw(sum-w,sum/w)*5;
}

int main()
{
    cout<<drw(10,5);
    system("PAUSE");
    return 0;
}