/**Write a program to find the area of circle, rectangle and triangle using function overloading**/
#include <iostream>
#define PI 3.1416
using namespace std;
float area(float radius) {
    float area = PI*radius*radius;
    return area;
}
//overloaded function 1
float area(int length, int breadth) {
    return length*breadth;
}
//overloaded function 2
float area(float base, float height) {
    return 0.5*base*height;
}

int main() {
    //dimensions of a circle
    float radius = 5.5;
    //dimensions of a rectangle
    int length = 2.2, breadth = 4.5;
    //dimensions of a triangle
    float base = 10.2, height = 7.2;
    cout << "Area of a circle: " << area(radius) << endl;
    cout << "Area of a rectangle: " << area(length, breadth) << endl;
    cout << "Area of a triangle: " << area(base, height) << endl;   
}

