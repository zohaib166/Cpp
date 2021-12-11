#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("data.txt");
    while(infile.is_open()) {
        string str1,str2;
        getline(infile,str1);
        //getline(infile,str2);
        cout<<str1<<"\n";
        if(infile.eof()) {
            cout<<"File ended\n";
            infile.close();
            break;
        }
    }
}
