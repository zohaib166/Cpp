#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Base class" << endl;
    }
};
class Derived1:public Base {
public:
    void display() {
        cout << "Derived1 class" << endl;
    }
};
class Derived2:public Derived1 {

};
int main() {
    Base *ptr = new Derived2();
    ptr->display();
}
