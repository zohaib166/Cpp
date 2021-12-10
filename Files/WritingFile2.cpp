#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myFile("data.txt",ios::app);
    if(myFile.is_open()) {
        myFile<<"This is first line\n";
        myFile<<"This is second line\n";
        myFile.close();
    } else {
        cout<<"Unable to open the file"<<endl;
    }
}
