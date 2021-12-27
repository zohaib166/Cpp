#include <iostream>
using namespace std;

template <typename T>
void fun(T p)
{
    p();
}

int main()
{
    int a=10;
    auto f = [&a]() {cout<<a++<<endl;};
    fun(f);
    fun(f);
}

