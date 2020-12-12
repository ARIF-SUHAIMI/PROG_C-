#include <iostream>

using namespace std;
int mul(int ,int );
int factorial(int );
int main()
{
    //recursive = looping
    //recursive is a powerful problem solving approach.
    //drawback : running time is not efficient
    //require multiple memory to store internal address of the function
    //not all problem can use recursive
    

    //BASE CASE : how to stop the repetition
        //simple can be solved directly
    //RECURSIVE CASE : 

    //Determine the base case : solve without calling the recursive function again
    //General case : reducing size of the problem
    //Combine the base case and general case into an algorithm

    /*if(terminal case is reached)  <- base case
        solve the problem
    else                            <-general case
    {
            reduce the size of the problem and call recursive function

            ensure that can reach base case
    }*/

    //multiply 2 numbers using addition method
        //exmp : 8*3 = 24
        //=8+8+8=24

    /*int mul(int M,int N)
    {
        if(N==1)
            return M;
        else
            return M+mul(M,N-1);
    }//end multiply
    */    
    int j=0;
    j=mul(5,3);
    cout<<j<<endl;
    j=factorial(5);
    cout<<j<<endl;
    //j=gcd(3,8);
    j=3%8;
    cout<<j<<endl;
    system("PAUSE");
    return 0;

    


    //Factorial problem
    /*0!==1
    1!==1*0!=1*1=1
    2!==2*1!=2*1*1=2
    3!==3*2!=2*2*1*1=6
    4!==4*3!=4*3*2*1*1=24
    */

   /*int factorial(int n)
   {
       if(n==0)
            return 1;
        else
            return n*factorial(n-1);
   }*/
}

int factorial(int n)
{
    if(n<0)
        return n;
    else
        return factorial(n-1)*factorial(n-2);
}

int mul(int M,int N)
{
    if(N==1)
        return M;
    else
        return M+mul(M,N-1);
}
