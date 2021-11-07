#include <iostream>
using namespace std;
class Demo {
public:
    int a;
    int *p;
    Demo() {
        p = new int;
    }
    Demo(Demo &d) {
        a = d.a;
        p = new int;
        *p = *(d.p);
    }
    void setdata(int x, int y) {
        a = x;
        *p = y;
    }
    void showdata()
    {
        cout << "value of a is : " << a << endl;
        cout << "value of *p is : " << *p << endl;
    }
};
int main()
{
    Demo d1;
    d1.setdata(4, 7);
    Demo d2 = d1;
    d2.showdata();
    d1.setdata(4, 8);
    d2.showdata();
    return 0;
}