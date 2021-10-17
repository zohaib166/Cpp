#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x=3,y=5;
    int &a = x, &b = y; //a and b are references to x and y
    swap(a,b);
    cout << x << " " << y << endl;
}

