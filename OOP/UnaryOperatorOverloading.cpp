#include <iostream>
using namespace std;
class complex {
public:
    double real;
    double imag;
    complex(double, double);
    complex operator-();
    complex operator++();
    complex operator++(int);
    void display();
};
complex::complex(double r=0.0, double i=0.0) {
    real = r;
    imag = i;
}
complex complex::operator-() {
    real = real*(-1);
    imag = imag*(-1);
    return *this;
}
//pre-increment
complex complex::operator++() {
    real++;
    imag++;
    return *this;
}
//post-increment
complex complex::operator++(int) {
    real++;
    imag++;
    return *this;
}
int main() {
    complex c1(3.4,5.6);
    cout << c1.real << "+i" << c1.imag << endl;
    ++c1;
    cout << c1.real << "+i" << c1.imag << endl;
    c1++;
    cout << c1.real << "+i" << c1.imag << endl;
    -c1;
    cout << c1.real << "+i" << c1.imag << endl;
}
