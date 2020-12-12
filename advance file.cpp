    #include <iostream>
    #include <fstream>
    //#include <ifstream>
    //#include <ofstream>
    using namespace std;

    int main()
    {
        fstream inp;
        inp.open("test.txt",ios::in|ios::out);  //inp act as input and output
        ifstream inp2;
        inp.open("test.txt");
        ofstream out("test.txt");
        string name="test.txt";

        //file name must be c-string
        ifstream inp3(name.c_str());     
        //ifstream inp3(name.dat());

        //file validation
        if(inp.fail())
            cout<<"file not found"<<endl;
        if(!inp)
            cout<<"file not found"<<endl;
        //if(inp==NULL)
        //    cout<<"File not found"<<endl;
        if(inp.is_open())
            cout<<"file not found"<<endl;

        //c-string
        char f[41];
        inp.getline(f,40);  //limit 40 character
        inp.getline(f,40,'\t'); //limit 40 character or delimitor

        //string
        string myfile;
        getline(inp,myfile);


        system("PAUSE");
        return 0;
    }

    bool openfile(fstream &file,char *name)
    {
        file.opn(name,ios::in);
        if(!file)
            return false;
        else
            return true;
    }

    void showcontent(fstream &f)
    {
        char line[100];
        while(f>>line)
        {
            //cout<<line
        }
    }