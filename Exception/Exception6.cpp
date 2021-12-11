#include <iostream>
using namespace std;
class Base{};
class Derived:public Base {};

int main() {
    Derived d;
    try {
        throw d;
    } catch(Base b) {
        cout<<"Caught a base class"<<endl;
    } catch(Derived d) {
        cout<<"This won't exceute"<<endl;
    }
    return 0;
}

