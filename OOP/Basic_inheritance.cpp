#include <iostream>
using namespace std;
class Base {
    int i,j;
public:
    void setBase(int i, int j) {
        this->i=i;
        this->j=j;
    }
    void showBase() {
        cout<< "Base Class\n";
        cout << i <<" " <<j <<" "<<endl;
    }
};
class Derived:public Base {
    int k;
public:
    void setDerived(int k) {
        this->k=k;
    }
    void showDerived() {
        cout << "Derived Class\n";
        cout << k << endl;
    }
};
int main() {
    Derived d;
    d.setDerived(2);
    d.setBase(5,6);
    d.showDerived();
    d.showBase();
}
