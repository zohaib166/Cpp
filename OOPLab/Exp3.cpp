#include <iostream>
using namespace std;
class complex {
public:
    double real;
    double imag;
    complex(double, double);
    complex();
    complex add(complex); 
    complex operator+(complex);
};
complex::complex() {}
complex::complex(double r, double i) {
    real = r;
    imag = i;
}
complex complex::add(complex c) {
    complex x;
    x.real = real+c.real;
    x.imag = imag+c.imag;
    return x;
}
// + operator overloaded to add complex number
complex complex::operator+(complex c) {
    complex x;
    x.real = real+c.real;
    x.imag = imag+c.imag;
    return x;
}
int main() {
    complex c1(3.4,5.6), c2(1.3, 7.3);
    complex a1,a2,a3;
    a1 = c1.add(c2);
    a2 = c1.operator+(c2);
    a3 = c1 + c2;
    cout << a1.real << "+i" << a1.imag << endl;
    cout << a2.real << "+i" << a2.imag << endl;
    cout << a3.real << "+i" << a3.imag << endl;
}
