#include <iostream>
using namespace std;
/**
Find the Greatest Common Divisor (GCD) of the two given numbers
**/
int gcd(int x, int y) {
    //complete this function
    int temp;
    while(y>0)
    {
        temp = y;
        y = x%y;
        x = temp;
    }
    return x;

}
int main() {
    int num1,num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout<<"GCD of "<<num1<<" and "<<num2<<" is: "<<gcd(num1,num2)<<endl;
}
