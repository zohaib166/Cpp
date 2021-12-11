#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
    ifstream infile;
    if(argc!=2) {
        cerr<<"Usage CommandLine <filename>"<<endl;
        return 1;
    }
    infile.open(argv[1]);
    while(infile.is_open()) {
        string str;
        getline(infile,str);
        cout<<str<<endl;
        if(infile.eof()) {
            cout<<"File ended"<<endl;
            infile.close();
        }
    } 
}
