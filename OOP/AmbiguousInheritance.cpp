#include <iostream>
using namespace std;

class A {
public:
    int a;  
};
class B:public A {
public:
    int b;
};
class C:public A {
public:
    int c;
};
class D:public B,public C {
public:
    int d;
};
int main() {
    D obj;
    //obj.a = 10; //Ambiguous call to a
    //obj.a = 100; //Ambiguous call to a
    obj.B::a = 10; //B's copy of a
    obj.C::a = 100; //C's copy of a
    cout << obj.B::a << endl;
    cout << obj.C::a << endl;
}
