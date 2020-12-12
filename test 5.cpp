// Function that return a class
#include <iostream>
#include <string>
using namespace std;
class subject
{
    private:
        string subjectName;
        string code;
        int credit;
    public:
        subject (string a="xxx",string b="kkk",int k=3);
        ~subject (){ cout << "\nDESTROY OBJECT"; }
        void getDetail();
        void changeDetail();
};
subject changeSubject(); // function that return a class
subject::subject (string sub, string cd,int cred)
{ 
    subjectName = sub;
    code = cd;
    credit = cred;
}
void subject:: getDetail()
{
    cout << "\n\nSubject Name : " << subjectName;
    cout << "\nSubject Code : " << code;
    cout << "\nCredit hours : " << credit<<endl;
}
void subject::changeDetail()
{ 
    cout << "\nInsert new subject name: ";
    getline(cin,subjectName);
    cout << "\nInsert new subject code: ";
    getline(cin,code);
}
// changeSubject()implementation
// write code based on the comment given
subject changeSubject()
{ 
    // declare instance of subject
    // call function changeDetail()through the instance.e
    subject subj2;
    subj2.changeDetail();
    cout << "\nGet new information for the subject.";
    // call function getDetail() through the instance;
    subj2.getDetail();
    // return the instance
    return subj2;
}
main()
{   
    subject subj("Data Structure & Algorithm","SECJ2013");
    subj.getDetail();
    subj = changeSubject();
    //call a function that return object subject
    cout << "\nSubject information after return to main().";
    subj.getDetail();
    system("PAUSE");
    return 0;
}