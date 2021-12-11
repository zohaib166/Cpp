#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("data.txt");
    if(infile.is_open()) {
        string str1,str2;
        getline(infile,str1);
        getline(infile,str2);
        cout<<str1<<"\n"<<str2;
        infile.close();
    } else {
        cout<<"File could not be opened";
    }
}
