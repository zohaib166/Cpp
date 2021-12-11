#include <iostream>
using namespace std;

template <class type1, class type2>

void display(type1 x, type2 y) {
    cout << x << " " << y << endl;
}

int main()
{
    display(10,12.45);
    display('a',"cat");
    return 0;
}
