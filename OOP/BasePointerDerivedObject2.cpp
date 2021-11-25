#include <iostream>
using namespace std;

class Base {
public:
    void func1() {
        cout << "Base Display" << endl;
    }
};
class Derived:public Base {
public:
    void func2() {
        cout << "Derived Display" << endl;
    }
};

int main() {
    Base b;
    Derived *d;
    d = &b;
    d->func1(); //correct
    d->func2(); //not allowed
}
