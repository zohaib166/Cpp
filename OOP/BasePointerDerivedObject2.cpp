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
    d = &b; //error
    d->func1(); 
    d->func2();
}
