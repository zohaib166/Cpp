#include <iostream>
using namespace std;
class Demo
{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend void func();
};
void func()
{
    Demo d;
    d.a = 10; //not accessible
    d.b = 20; //not accessible
    d.c = 30;
}
int main()
{
    func();
}

