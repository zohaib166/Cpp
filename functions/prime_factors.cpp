#include<iostream>
using namespace std;


void prime_factors(int num) {
    int i=2;
    int orig = num;
    if(i==2) {
        cout << "The number is prime";
        return;
    }
    while(true) {
        if(num%i==0) {
            cout << i << ",";
            num = num/i;
        } else {
            i++;
        }
        if(num==0 || i==num) {
            break;
        }
    }
    if(i<orig)
        cout << i;
    else 
        cout << "The number is prime";
}
int main()
{
    prime_factors(3);
    return 0;
}