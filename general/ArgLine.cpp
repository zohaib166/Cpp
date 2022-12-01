#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    //cout << argc;
    if(argc<3) {
        cerr << "Usage: ArgLine <num1> <num2>" << endl;
        return 1;
    }
    cout << atoi(*(argv+1)) + atoi(*(argv+2)) << endl;
    return 0;
}