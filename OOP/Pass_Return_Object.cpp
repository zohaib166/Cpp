#include <iostream>
using namespace std;
class complex {
public:
    double real;
    double imag;
    complex() {
    }
    complex(double r, double i) {
        real = r;
        imag = i;
    }
    complex add(complex c) {
        complex c1;
        c1.real=real+c.real;
        c1.imag=imag+c.imag;
        return c1;
    }
    void toString() {
        cout.precision(4);
        cout << real << "+i" << imag << " ";
    }
};

int main() {
    complex num1(2,3),num2(4,5);
    complex num3 = num1.add(num2);
    num3.toString();   
}
