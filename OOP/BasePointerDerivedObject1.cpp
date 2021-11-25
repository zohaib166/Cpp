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
    Derived d;
    Base *b;
    b = &d;
    b->func1(); //correct
    b->func2(); //not allowed
}
