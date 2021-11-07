#include <iostream>
using namespace std;
class Demo
{
    int a;
    int *p;
public:
    Demo()
    {
        p = new int;
    }
    void setdata(int x, int y)
    {
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