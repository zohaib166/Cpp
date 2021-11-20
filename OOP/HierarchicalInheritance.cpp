#include <iostream>
using namespace std;
class Vehicle {
public:
    Vehicle() {
        cout<<"This is a Vehicle: ";
    }
};
class Car:public Vehicle {
public:
    Car() {
        cout<<"Car\n";
    }
};
class Bus:public Vehicle {
public:
    Bus() {
        cout<<"Bus\n";
    }
};
int main() {
    Car c;
    Bus b;
}
