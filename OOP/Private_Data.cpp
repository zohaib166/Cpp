#include <iostream>
using namespace std;
class Rectangle {
    int length;
    int breadth;
    public:
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
    r.length = 34; //error
    r.breadth = 45; //error
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
}