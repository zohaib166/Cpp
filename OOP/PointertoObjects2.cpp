#include <iostream>
using namespace std;

class test
{
    int i;
public:
    test() { i=0; }
    test(int a) { i=a; }
    int get() { return i; }
};
int main() {
    test t[3] = {1,2,3};
    test *ptr;
    ptr = t;
    for(int i=0;i<3;i++) {
        cout << ptr->get() << " ";
        ptr++;
    }
}
