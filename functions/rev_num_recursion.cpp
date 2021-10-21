#include <iostream>
using namespace std;

int rev_num(int num) {
    static int rev=0;
    if(num>0) {
        rev = rev*10+num%10;
        num/=10;
        return rev_num(num);
    } else {
        return rev;
    }
}

int main() {
    cout << rev_num(456) << endl;
}
