#include <iostream>
using namespace std;
const int MAX_SIZE=8;
void mergesort (char theArray [], int first, int last);
void merge (char theArray[],int first, int mid, int last);

class TestClass
{
   private:
      int val;
      void showVal()
      { cout << val << endl; }

   public:
      TestClass(int x)
      { val = x; }
};

int main()
{
   TestClass test(77);
   test.showVal();
   system("PAUSE");
   return 0;
}