#include <iostream>
using namespace std;
class Rectangle {
    int length, breadth;
public:
    Rectangle() {
        length=0;
        breadth=0;
    }
    Rectangle(int l, int b) {
        length=l;
        breadth=b;
    }
    void showRectangle() {
        cout<<"["<<length<<","<<breadth<<"]"<<endl;
    }
    int getLength() { return length; }
    int getBreadth() { return breadth; }
};
class Cuboid: public Rectangle {
    int height;
public:
    Cuboid(int l,int b,int h): Rectangle(l,b) {
        height = h;
    }
    void showCuboid() {
        cout<<"["<<getLength()<<","<<getBreadth()<<","<< height<<"]"<<endl;
    }
};
int main() {
    Cuboid x(3,4,5);
    x.showCuboid();
    x.showRectangle();
}
