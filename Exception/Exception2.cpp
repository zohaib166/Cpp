#include <iostream>
using namespace std;

int main()
{
    cout << "Start\n";
    try {
        cout << "Inside try block\n";
        throw 100;
        cout << "This line will not execute\n";
    }
    catch(double i) {
        cout << "Caught an exception -- value is: ";
        cout << i << "\n";
    }

    cout<<"End";
}
