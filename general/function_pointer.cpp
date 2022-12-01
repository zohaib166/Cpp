#include<iostream>
using namespace std;

void display()
{
    cout << "Hello\n";
}

int add(int a, int b) {
    return a+b;
}
int main()
{
    void (*ptr)() = &display;

    int (*add_ptr)(int, int) = &add;
    (*ptr)();
    cout << (*add_ptr)(3,5);
    return 0;
}