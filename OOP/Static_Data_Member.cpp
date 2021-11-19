#include <iostream>
using namespace std;
class items {
    static int count;
    int number;
public:
    void setNumber(int x);
    void getCount();
};
int items::count;
void items::setNumber(int x) {
    number=x;
    items::count++;
}
void items::getCount() {
    cout << "The count is: "<< count << endl;
}
int main()
{
    items x,y; // count is initialized to zero
    x.getCount(); // display count
    y.getCount();
    x.setNumber(100); // getting data into object x
    y.setNumber(200); // getting data into object y
    cout << "After reading data" << "\n";
    x.getCount(); // display count
    y.getCount();
    return 0;
}
