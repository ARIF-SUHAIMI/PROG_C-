#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/*class student
{
    private:
        string name;
        string matrixno;
        char grade;
        char answer[];
        float mark;
    public:
        student()
        {

        }
        char getanswer()
        {
            return answer;
        }
        float getmark()
        {
            return mark;
        }
        void setmark(float m)
        {
            mark=m;
        }
        void setgrade()
        {
            
        }
        void print()
        {
            cout<<left<<setw(15)
            <<matrixno<<setw(10)
            <<name<<setw(7)<<mark<<grade;
        }
        friend void getinfo(student []);
};

void getinfo(student s[])
{
    int i=0,p=0;
    ifstream inp;
    inp.open("stud_record.txt");
    while(!inp.eof())
    {
        getline(inp,s[i].name," ");
        getline(inp,s[i].matrixno," ");
        for(int y=0;y<25;y++)
        {
            inp>>s[i].answer[p];
            p++;
        }
        i++
    }
}*/

int main()
{
    cout<<"test"<<endl;
    system("PAUSE");
    return 0;
}