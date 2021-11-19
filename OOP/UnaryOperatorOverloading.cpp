#include <iostream>
using namespace std;
class complex {
public:
    double real;
    double imag;
    complex(double, double);
    void operator-();
    void display();
};
complex::complex(double r=0.0, double i=0.0) {
    real = r;
    imag = i;
}
void complex::operator-() {
    real = real*(-1);
    imag = imag*(-1);
}
int main() {
    complex c1(3.4,5.6);
    cout << c1.real << "+i" << c1.imag << endl;
    -c1;
    cout << c1.real << "+i" << c1.imag << endl;
}
