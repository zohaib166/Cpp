#include <iostream>
using namespace std;
class Base{};
class Derived:public Base {};

int main() {
    Derived d;
    try {
        throw d;
    } catch(Derived d) {
        cout<<"Caught a base class"<<endl;
    } catch(Base b) {
        cout<<"This won't exceute"<<endl;
    }
    return 0;
}

