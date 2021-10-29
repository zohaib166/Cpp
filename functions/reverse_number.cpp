#include <iostream>
using namespace std;

int reverse_number(int num)
{
    //complete this function
    int rev=0;
    while(num>0) {
        rev = rev*10+num%10;
        num/=10;
    }
    return rev;
}

int main() {
    cout << reverse_number(1234) << endl; //expected output 4321
    cout << reverse_number(4556) << endl; //expected output 6554
}
