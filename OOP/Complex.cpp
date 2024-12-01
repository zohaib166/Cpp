#include <iostream>
#include <iomanip>
using namespace std;
class complex {
public:
    double real;
    double imag;
    complex(double, double);
    complex();
    complex operator+(complex);
    complex operator-(complex);
    complex operator*(complex);
    complex operator/(complex);
    complex compliment();
    void print();
};

complex::complex() {}
complex::complex(double r, double i) {
    real = r;
    imag = i;
}

complex complex::operator+(complex c) {
    complex x;
    x.real = real+c.real;
    x.imag = imag+c.imag;
    return x;
}

complex complex::operator-(complex c) {
    complex x;
    x.real = real-c.real;
    x.imag = imag-c.imag;
    return x;
}

complex complex::compliment() {
    complex x;
    x.real = real;
    x.imag = -imag;
    return x;
}

complex complex::operator*(complex c) {
    complex x;
    x.real = real*c.real - imag*c.imag;
    x.imag = real*c.imag + imag*c.real;
    return x;
}

complex complex::operator/(complex c) {
    double denominator = c.real*c.real + c.imag*c.imag;
    complex num = (*this) * c.compliment();
    num.real = num.real/denominator;
    num.imag = num.imag/denominator;
    return num;
}

void complex::print() {
    cout << fixed << setprecision(2);
    if(imag < 0)
        cout << real << "-" << -1*imag << "i" << endl;
    else if(imag > 0) {
        cout << real << "+" << imag << "i" << endl;
    } else if(imag == 0) {
        cout << real << endl;
    } else if(real == 0) {
        cout << imag << "i" << endl;
    }
}

int main() {
    complex c1(3.4,5.6), c2(1.3, 7.3);
    complex a1;
    a1 = c1 * c2;
    a1.print();
}
