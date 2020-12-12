#include <iostream>

using namespace std;
int findBinary(int );
int main()
{
    cout<<findBinary(4)<<endl;
    system("PAUSE");
    return 0;
}

int findBinary(int decimal)
{
    if(decimal==0)
        return decimal=0;
    else
        return (decimal % 2 + 10 * (findBinary(decimal / 2)));  
}

