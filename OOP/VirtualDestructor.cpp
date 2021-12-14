#include <iostream>
using namespace std;

class Base {
    public:
    Base() {
        cout<<"Base Constructor"<<endl;
    }
    //Base destructor should be made virtual 
    //then only the derived destructor will be called
    virtual ~Base() {
        cout<<"Base Destructor"<<endl;
    }
};
class Derived: public Base {
    public:
    Derived() {
        cout<<"Derived Constructor"<<endl;
    }
    ~Derived() {
        cout<<"Derived Destructor"<<endl;
    }
};
int main()
{
    Base *p = new Derived;
    //Only Base Destructor will be called if Derived Destructor is not Virtual
    delete p;
}