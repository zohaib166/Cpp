#include <iostream>
using namespace std;

int main()
{
    [](){cout<<"hello"<<endl;}();
    [](int x, int y){cout<<"Addition is: "<<x+y<<endl;}(2,3);
    int a = [](int x, int y)->int{return x+y;}(10,20);
    cout << a << endl;
    int x = 10;
    //[x](){cout<<x<<endl;}();
    //make capture value x as reference if we 
    //want it to change value of x
    auto f = [&x](){cout<<x<<endl;};
    f(); //call once
    x++;
    f(); //call again
}
