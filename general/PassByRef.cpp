#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    x = (x * y) / (y = x);
}

int main()
{
    int a = 2, b = 3;

    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}