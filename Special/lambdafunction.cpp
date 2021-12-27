#include <iostream>
using namespace std;

int main()
{
    [](){cout<<"hello"<<endl;}();
    [](int x, int y){cout<<"Addition is: "<<x+y<<endl;}(2,3);
    int a = [](int x, int y)->int{return x+y;}(10,20);
    cout << a << endl;
}
