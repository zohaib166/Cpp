#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream inputObj;
    inputObj.open("hello.txt");
    string name = "John Wick\n";
    inputObj<<name;
    inputObj.close();
}
