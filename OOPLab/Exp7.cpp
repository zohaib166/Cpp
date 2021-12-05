#include <iostream>
using namespace std;

class calculator {
    int num1, num2;
public:
    friend int add(int,int);
    friend int subtract(int,int);
    friend int multiply(int,int);
    friend float divide(int,int);
};
int add(int x, int y) {
    calculator cal;
    cal.num1=x;cal.num2=y;
    return cal.num1+cal.num2;
}
int subtract(int x, int y) {
    calculator cal;
    cal.num1=x;cal.num2=y;
    return cal.num1-cal.num2;
}
int multiply(int x, int y) {
    calculator cal;
    cal.num1=x;cal.num2=y;
    return cal.num1*cal.num2;
}
float divide(int x, int y) {
    calculator cal;
    cal.num1=x;cal.num2=y;
    return (float)cal.num1/cal.num2;
}
int main() {
    int a=3,b=4;
    float c;
    c = add(a,b);
    cout << "Addition:"<<c<<endl;
    c = subtract(a,b);
    cout << "Subtraction:"<<c<<endl;
    c = multiply(a,b);
    cout << "Multiplication:"<<c<<endl;
    c = divide(a,b);
    cout << "Division:"<<c<<endl;
}
