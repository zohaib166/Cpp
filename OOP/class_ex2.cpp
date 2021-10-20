#include <iostream>
using namespace std;
class Rectangle
{
public:  //when public when private
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
    
int main()
{
    //Save object in the heap using new operator
    Rectangle *pr = new Rectangle();
    pr -> length = 4;
    pr -> breadth = 5;
    cout << pr -> area() << endl;
    cout << pr -> perimeter() << endl;
}
