#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Point {
public:
    int x,y;
    Point():x(0),y(0) {}
    Point(int x, int y):x(x), y(y) {}
};

class Line {
public:
    Point p1, p2;
    Line(Point p1, Point p2) {
        this->p1 = p1;
        this->p2 = p2;
    }

    double getLineLength() {
        return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
    }
};

class Shape {
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Rectangle : public Shape {
public:
    Line l1, l2;

    Rectangle(Line len, Line bre): l1(len), l2(bre) {}

    double getArea() {
        double length = l1.getLineLength();
        double breadth = l2.getLineLength();
        return length * breadth;
    }

    double getPerimeter() {
        double length = l1.getLineLength();
        double breadth = l2.getLineLength();
        return 2*(length + breadth);
    }

};

int main()
{
    Point p1(0,0), p2(0,5), p3(10,0), p4(10,5);
    Line l1(p1,p3), l2(p1,p2);
    Rectangle r(l1,l2);

    cout << r.getArea() << endl;
    cout << r.getPerimeter() << endl;
    
}



