#include <iostream>
using namespace std;
class Rectangle {
    public:
    int length;
    int breadth;

    int area() {
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle *r = new Rectangle;
    r->length = 3;
    r->breadth = 4;
    cout << r->area() << endl;
    cout << r->perimeter() << endl;
}