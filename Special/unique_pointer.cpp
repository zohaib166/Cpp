#include <iostream>
#include <memory>

using namespace std;
class Rectangle {
    int length, breadth;
public:
    Rectangle(int len, int bre) {
        length = len;
        breadth = bre;
    }
    int area() {
        return length*breadth;
    }
};

int main() {
    //Unique pointer Demo
    //object created in heap and given to unique pointer ptr
    unique_ptr <Rectangle> ptr(new Rectangle(10,5));
    cout << "Display using unique pointer ptr "<<ptr->area()<<endl;
    //This will give an error
    //unique_ptr <Rectangle> ptr2=ptr;
    unique_ptr <Rectangle> ptr2;
    ptr2 = move(ptr);
    cout << "Display using unique pointer ptr2 after move "<<ptr2->area()<<endl;

    //Shared Pointer Demo
    shared_ptr <Rectangle> sptr(new Rectangle(5,5));
    cout<<"Display using shared pointer sptr "<<sptr->area()<<endl;
    shared_ptr <Rectangle> sptr2(sptr);
    cout<<"Display using shared pointer sptr2 "<<sptr2->area()<<endl;
}

