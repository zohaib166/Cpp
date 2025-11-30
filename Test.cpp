
#include <iostream>

using namespace std;

class Rectangle {
    int length, breadth;
public:
    void setLength(int l) {
        if(l<1) {
            cout << "invalid input, setting default to 1\n";
            length = 1;
            return;
        }
        length = l;
    }
    void setBreadth(int b) {
        if(b<1) {
            cout << "invalid input,  setting default to 1\n";
            breadth = 1;
            return;
        }
        breadth = b;
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
    r1.setLength(-1);
    r1.setBreadth(-1);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
}
