#include <iostream>
using namespace std;

void display(int x)
{
    cout << "Printing integer: " << x << endl;
}
void display(float x)
{
    cout << "Printing float: " << x << endl;
}
void display(int x, float y)
{
    cout << "Printing integer and float: " << x << " " << y << endl;
}

int main()
{
    display(3);
    display(4.3f);
    display(4,3.4f);
}



