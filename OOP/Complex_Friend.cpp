#include <iostream>
using namespace std;
class complex {
public:
    double real;
    double imag;
    complex(double, double);
    complex();
    friend complex operator+(complex,complex);
    void display();
};
complex::complex() {}
complex::complex(double r, double i) {
    real = r;
    imag = i;
}
complex operator+(complex a, complex b) {
    complex x;
    x.real = a.real+b.real;
    x.imag = a.imag+b.imag;
    return x;
}
void complex::display() {
    cout << real << "+i" << imag << endl;
}
int main() {
    complex c1(3.4,5.6), c2(1.3, 7.3);
    complex a3;
    a3 = c1 + c2;
    a3.display();
}
