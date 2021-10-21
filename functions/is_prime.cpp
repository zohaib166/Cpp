#include <iostream>
using namespace std;

int main() {
    int num,i=2;
    cout << "Enter a number to check if it is prime" << endl;
    cin >> num;
    if(num<2) {cout << "invalid number" << endl; return 1;}
    while(i<num) {
        if(num%i==0)
        {
            cout << "Not Prime" << endl;
            return 1;
        }
        i++;
    }
    cout << "Prime" << endl;   
}
