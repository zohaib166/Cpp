#include <iostream>
using namespace std;
long raise2pow(int x, int y) {
    long result=1;
    while(y>0) {
        result *= x;
        y--;
    }
    return result;
}
int main()
{
    int x=3,y=5;
    cout << raise2pow(x,y) << endl;    
}
