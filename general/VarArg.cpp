#include<iostream>
#include <cstdarg>
using namespace std;

int add(int x, ...) {
    va_list count;
    va_start(count, x);
    int sum = 0;
    for(int i=0; i<x; i++) {
        sum += va_arg(count, int);
    }
    va_end(count);

    return sum;
}
int main()
{
    cout << add(10, 1,2,3,5,8,3,4,5,6,7);
    return 0;
}