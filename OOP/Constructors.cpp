#include <iostream>
using namespace std;

class Rectangle {
    private:
    int length;
    int breadth;
    public:
    /*Rectangle() {
        length = 1;
        breadth = 1;
    }*/
    Rectangle(int l=0, int b=0) {
        length = l;
        breadth = b;
    }
    Rectangle(Rectangle &rect) {
        length = rect.length;
        breadth = rect.breadth;
    }
    int area() {
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);
    }
};
int main() {
    Rectangle r1;
    Rectangle r2(4,5);
    Rectangle r3(r2);
    cout << "Rectangle Object 1: ";
    cout << "Area: " << r1.area() << " ";
    cout << "; Perimeter: " << r1.perimeter() << endl;

    cout << "Rectangle Object 2: ";
    cout << "Area: " << r2.area() << " ";
    cout << "; Perimeter: " << r2.perimeter() << endl;

    cout << "Copy of Rectangle Object 2: ";
    cout << "Area: " << r3.area() << " ";
    cout << "; Perimeter: " << r3.perimeter() << endl;
}