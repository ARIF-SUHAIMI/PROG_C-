// Array of class
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
using namespace std;
class medicalInfo 
{
    private:
        string medicine;
        string disease;
    public:
        void setMedicine()
        { 
            cout << "\nEnter medicine name : " ; 
            getline(cin,medicine) ; 
        }
        void setDisease()
        { 
            cout << "\n Enter disease's name: " ;
            getline(cin,disease); 
            }
        string getMed() { return medicine;}
        string getDisease() {return disease;}
};
// nonmember function that receive array of object as parameter
// this function asks the user to enter certain disease
// the function will search the medicine for the disease
void checkMedicine(medicalInfo x[])
{ 
    string sickness;
    int found = 0;
    cout << "\nEnter the disease: ";
    cin >> sickness;
    //char v;
    //strcpy(v,sickness.c_str());
    //sickness=v.cas
    for (int n = 0; n < 5; n ++)
    {
        if (sickness == x[n].getDisease())
        { 
            cout << "\nThe medicine for "<< sickness << " is " << x[n].getMed()<<endl;
            found = 1;
            break;
        }
    }
    
    if (found == 0)
    { 
        cout <<"\nSorry,we havent found any medicine for your disease yet.";
        cout << "\nPlease refer to other physician.";
    }
}
main()
{
    medicalInfo data[5];
    // create database that will store 5 deseases
    // and 5 medicines for the disease
    for (int n = 0; n < 5; n++)
    { 
        data[n].setMedicine(); // key in the data
        data[n].setDisease();
    }
    cout <<"\nList of disease and the medicine :"<<endl;
    // print the information
    for (int n = 0; n < 5; n++)
    {
        
        cout<<left<< "\n" <<setw(15)<< data[n].getMed() <<" "<< data[n].getDisease();
    // pass the whole array data to function
    }
    
    checkMedicine(data);
    system("PAUSE");
    return 0;
}