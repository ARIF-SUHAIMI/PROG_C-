#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream inp;
    inp.open("test.txt",ios::in|ios::binary);
    char ch;
    inp.read(&ch,sizeof(ch));   //first parameter address where data must go
                                //second parameter how many bytes to read from the file
    fstream out("out.txt",ios::out|ios::binary);
    char gg;
    out.write(&gg,sizeof(gg));

    fstream inp1("test.txt",ios::in|ios::binary);
    int num;
    inp1.read(reinterpret_cast<char*>&num,sizeof(num)); //convert int to char
    //inp.read((char*)&num,sizeof(num));

    fstream out1;
    out1.write(reinterpret_cast<char *>&num,sizeof(num));

    while(!inp.eof)
    {
        inp.read(&ch,sizeof(ch));
    }

    //seekg input
    //seekp output
    //offset : bytes in long
    //mode : point

    inp.seekg(25L,ios::beg);    //ios begining
    //set read posotion at 26th byte
    //from begining of file

    out.seekp(-10L,ios::cur);   //ios current
    //set write position 10bytes    cursor move 10 bytes to the left
    //before current position

    inp.clear();
    inp.seekg(0L,ios::beg);
    //go to the begining


    inp.seekg(0L,ios::end); //cursor on the end
    int size=inp.tellg();   //input file
    size=out.tellp();   //output file
    //read the cursor location. As it is currently
    //at the end of the file, thus it can be used
    //as indicator of the size of the file.

    cout<<size<<" Bytes"<<endl;
    //print the size Bytes

}