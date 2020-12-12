#include <iostream>

using namespace std;

int calc(int n)
{
  if(n<0)
    return 0;
  else
  {
    return calc(n-1)*calc(n-2);
  }
  
}

int main()
{
  cout<<calc(15)<<endl;
  system("PAUSE");
  return 0;
}