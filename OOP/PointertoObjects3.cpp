#include <iostream>
using namespace std;

class test
{
public:
    int i;
    test() { i=0; }
    test(int a) { i=a; }
    int get() { return i; }
};
int main() {
    test t(50);
    int *ptr; //pointer to member
    ptr = &t.i;
    cout << *ptr; //access t.i via pointer
}
