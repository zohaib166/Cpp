#include <iostream>
using namespace std;

inline int my_square(int x) {
    return x*x;
}

int main() 
{
    int x = 3;
    cout << my_square(x) <<endl;
}
