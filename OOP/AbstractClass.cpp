#include <iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound() = 0;
    void eat() {
        cout << "Munchies";
    }
};
class Dog:public Animal {
public:
    void makeSound() {
        cout << "Bow Wow" << endl;
    }
};
class Cat: public Animal {
public:
    void makeSound() {
        cout << "Meow" << endl;
    }
};
int main() {
    Animal a; //not allowed
    Animal *ptr; //Allowed
    ptr -> eat();
}
