#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int i=2;
    int num2 = num;
    int flag=0;
    while(i<num2) {
        if(num%i==0) {
            num = num/i;
            cout << i << " ";
            flag = 1;
        } else {
            i++;
        }
    }
    if(flag==0)
        cout<< "The number is prime" << endl;
}
