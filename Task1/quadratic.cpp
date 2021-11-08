#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter the values of a,b and c in ax^2+bx+c" << endl;
    int a,b,c;
    cin >> a >> b >> c;
    //discriminant
    float D = b*b-4*a*c;
    if(D>=0) { //real roots
        sqrt(D);
        float root1 = -b+D/(2.0*a);
        float root2 = -b-D/(2.0*a);
        cout << root1 << " " << root2;
    }
    else { //real + imaginary
        D = D * -1;
        float real = -b/(2.0*a);
        float imag = sqrt(D)/(2.0*a);
        cout << real << "+-i" << imag;
    }
}
