#include <iostream>
#include <string>
#include <fstream>
using namespace std;
fstream infile("recordS.txt",ios::in);
class Student
{
  private:
    string studentName,matrixNumber;
    char answer[25];
    //char grade='A';
    float marks;
  public:
    void getData()
    {
      
        getline(infile,studentName,' ');
        cout<<studentName<<endl;
        getline(infile,matrixNumber,' ');
        cout<<matrixNumber<<endl;
        for(int k=0;k<25;k++)
        {
            infile>>answer[k];
        }
        cout<<answer<<endl;
    }
    void gradeTest()
    {  
      char ans[]="BACDACBDABBACADAABACABCDA";
      for (int i=0;i<25;i++)
      {
        if (ans[i]==answer[i])
          marks=marks+4;
        else
          marks=marks+1;
      }
      cout<<marks;
    /*  mark=markah;
      if(mark<=44)
        cout<<"E"<<endl;
      if else(mark>=44&&ans<=54)
        cout<<"D"<<endl;
      if else (mark>=55&&ans<=64)
        cout<<"C"<<endl;
      if else (mark>=65&&ans<=74)
        cout<<"B"<<endl;
      else
        cout<<"A"<<endl;
    }*/
    }
    void printDetail()
    {
      cout<<studentName<<"\t"<<matrixNumber<<"\t"<<answer<<endl;
    }
    
};
/*
void calcMark()
{
  
  
  
}*/

int main()
{
  Student s[3];
  for(int i=0;i<3;i++)
  {
      s[i].getData();
  }
  //infile.close();
  /*for(int k=0;k<3;k++)
  {
      s[k].printDetail();
  }*/
  
  //s.gradeTest();
  system("PAUSE");
  return 0;
}