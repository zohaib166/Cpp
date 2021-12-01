#include <iostream>
using namespace std;
class Animal {
public:
    virtual void makeSound() = 0;
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
    Animal *bptr = new Cat();
    bptr->makeSound();
}
