#include<iostream>
using namespace std;
class Vehicle {
public:
    Vehicle() {cout<<"This is a Vehicle\n";}    
};
class FourWheeler {
public:
    FourWheeler() {cout<<"This is a Fourwheeler\n";}
};
class Car: public Vehicle, public FourWheeler {
};
int main() {
    Car c;
}
