#include <iostream>
using namespace std;
class Rectangle {
public:
    int length;
    int breadth;
    inline int area();
    
};

int Rectangle::area()
{
    return length*breadth;
}

int main() {
    Rectangle r;
    r.length=10;
    r.breadth=12;
    cout << r.area();
}
