#include <iostream>
using namespace std;

template <typename T>
void myswap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i=4,j=5;
    float a=4.5,b=6.1;
    char x='a',y='b';
    myswap<int>(i,j);
    myswap<float>(a,b);
    myswap<char>(x,y);
    cout << "Swapped values of i,j are "<<i<<","<<j<<endl;
    cout << "Swapped values of a,b are "<<a<<","<<b<<endl;
    cout << "Swapped values of x,y are "<<x<<","<<y<<endl;
}
