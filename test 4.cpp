// Pass by value
#include <iostream>
#include <string>
using namespace std;
class subject
{
    private:
        string subjectName;
        string kod;
        int credit;
    public:
        subject(string,string,int k=3);
        ~subject (){ cout << "Destroy subject instance"<<endl; }
        void printDetail();
        void setName(string newName)
        {
            subjectName=newName;
        }
        void setKod(string newKod)
        { 
            kod = newKod;
        }
};
void changeSubject(subject &);
subject::subject(string name,string code,int cred)
{ 
    subjectName = name;
    kod = code;
    credit = cred;
}
void subject::printDetail()
{
    cout << "\nSubject Name : " << subjectName;
    cout << "\nSubject Code : " << kod;
    cout << "\nCredit hours : " << credit<<endl;
}

main()
{ 
    subject subj("Data Structure & Algorithm","SECJ2013");
    subj.printDetail();
    changeSubject(subj);
    cout << "\nView the subject information again: ";
    subj.printDetail();
    system("PAUSE");
    return 0;
}

void changeSubject(subject &sub)
{   
    string newSubjectName, newSubkod;
    cout << "Insert new subject name: ";
    getline(cin,newSubjectName);
    cout << "\nInsert new subject code: ";
    getline(cin,newSubkod);
    sub.setName(newSubjectName);
    sub.setKod(newSubkod);
    cout << "\nGet new information for the subject.";
    sub.printDetail();
}