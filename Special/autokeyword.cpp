#include <iostream>
using namespace std;
int main()
{
    auto a = 3+4.5-'a';
    int x = 10;
    decltype(x) y = 11;
    cout << a<< " "<<x << " " << y << endl;
}
