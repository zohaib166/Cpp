#include <iostream>
using namespace std;
class Rectangle {
    int length;
    int breadth;
    public:
    void setLength(int l) {
        length = l;
    }
    void setBreadth(int b) {
        breadth = b;
    }
    int getLength() {
        return length;
    }
    int getBreadth() {
        return breadth;
    }
    int area() {
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r;
    r.setLength(3); //error
    r.setBreadth(4); //error
    cout << r.getLength() << endl;
    cout << r.getBreadth() << endl;
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
}