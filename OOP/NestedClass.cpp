#include <iostream>
using namespace std;
class Outer {
public:
    int i;
    void func() {
        x.j=22;
        cout<<"Outer class:"<<x.j<<endl;
    }
    class Inner {
    public:
        int j;
        void func2() {
            Outer o;
            o.i=6;
            cout<<o.i<<endl;
            cout << "Inner class";
        }
    };
    Inner x;
};
int main() {
    Outer o;
    o.func();
    Outer::Inner i;
    i.func2();
}
