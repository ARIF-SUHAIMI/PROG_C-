/*
#                            TUTO Q2
# TEAMMATES    : ARIF BIN SUHAIMI
# LECTURER     : Ms. LIZAWATI BINTI MI YUSUF 
# YEAR COURSE  : 1 SECR
# CODE         : SECJ2013 / SEC 03
# SEMESTER     : 3
# DATE         : 1 NOVEMBER 2020
# VENUE        : HOME
*/
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream inp("data.txt");
class student
{
    string studentname;
    string matrixcumber;
    char answer[25];
    char grade;
    float marks;

    public:
        student()
        {

        }
        void getdata()
        {
            getline(inp,studentname,' ');
            getline(inp,matrixcumber,' ');
            for(int i=0;i<25;i++)
            {
                inp>>answer[i];
            }
        }
        void gradetest()
        {
            marks=0.0;
            char ans[]={"BACDACBDABBACADAABACABCDA"};
            for(int t=0;t<25;t++)
            {
                if(ans[t]==answer[t])
                    marks+=4.0;
                else
                    marks-=1;
            }
            if(marks>=0&&marks<=44)
                grade='E';
            else if(marks>=45&&marks<=54)
                grade='D';
            else if(marks>=55&&marks<=64)
                grade='C';
            else if(marks>=65&&marks<=74)
                grade='B';
            else if(marks>=75&&marks<=100)
                grade='A';
        }
        void printdetails()
        {
            cout<<setw(10)<<studentname
            <<setw(17)<<matrixcumber
            <<setw(10)<<marks
            <<grade;
        }
};

int main()
{
    student sr[3];
    for(int u=0;u<3;u++)
    {
        sr[u].getdata();
    }
    inp.close();
    for(int y=0;y<3;y++)
    {
        sr[y].gradetest();
    }
    cout<<left;
    cout<<setw(10)<<"NAME"
    <<setw(17)<<"MATRICS NUMBER"
    <<setw(10)<<"MARKS"
    <<"GRADE"<<endl<<endl;
    for(int h=0;h<3;h++)
    {
        sr[h].printdetails();
    }
    cout<<endl;
    system("PAUSE");
    return 0;
}
