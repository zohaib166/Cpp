#include <iostream>
#include <cmath>
using namespace std;
class complex {
public:
    double real;
    double imag;
    complex(double, double);
    complex operator-();
    complex operator++();
    complex operator++(int);
    friend ostream& operator<<(ostream &out, complex &a);
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
//post-increment
complex complex::operator++() {
    real++;
    imag++;
    return *this;
}
//pre-increment
complex complex::operator++(int) {
    ++real;
    ++imag;
    return *this;
}

ostream& operator<<(ostream& out, complex &a) {
    if(a.imag < 0) {
        out << a.real << "-i" << abs(a.imag);
    } else if(a.imag > 0) {
        out << a.real << "+i" << a.imag;
    } else {
        out << a.real;
    }
    return out;
}

int main() {
    complex c1(3.4,5.6);
    cout << c1 << endl;
    ++c1;
    cout << c1 << endl;
    c1++;
    cout << c1 << endl;
    -c1;
    cout << c1 << endl;
}
