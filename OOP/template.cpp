#include <iostream>
using namespace std;
template <class Z>
Z maxim(Z x, Z y)
{
    if(x>y)
        return x; 
    else 
        return y;
}
int main()
{
    cout << maxim(4,5) << endl;
    cout << maxim<char>(65,'1') << endl;
}      
