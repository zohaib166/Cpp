#include <iostream>
#include <vector>
using namespace std;

struct S
{
    double d;
};

int main()
{
    int x, *ptr;
    decltype(x) i1 = 34;
    decltype(ptr) i2 = &i1;
    cout <<  *i2 << endl;
    const S* p;
    decltype((p->d)) x1 = 3.4; //const double&
    decltype(p->d) x2 = 3.4; //double - constness stripped
    cout << x1 << endl;

    int arr[] = {1,2,3};
    //decltype(arr)::_;
    char y;
    vector <int> a;
    cout << typeid(y).name() << endl;
    cout << typeid(a).name() << endl;
}