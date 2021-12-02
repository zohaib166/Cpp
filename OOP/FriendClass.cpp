#include <iostream>
using namespace std;
class Your;
class My
{
private: int a;
protected: int b;
public: int c;
friend Your;
};
class Your
{
public:
    My m;
    void func()
    {
        m.a;
        m.b;
        m.c;
    }
};
int main()
{

}
