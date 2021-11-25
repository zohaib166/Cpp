#include <iostream>
using namespace std;
class Parent {
public:
    void display() {
        cout << "Parent class" << endl;
    }
};
class Child:public Parent {
public:    
    void display() {
        cout << "Child class" << endl;
    }
};
int main() {
    Parent p;
    p.display();
    Child c;
    c.display();
}
