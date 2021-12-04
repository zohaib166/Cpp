#include <iostream>
using namespace std;

class test
{
    int i;
public:
    test(){ i=0; }
    test(int a) { i=a; }
    int get() { return i; }
};

int main() {
    test t(2);
    test *ptr;
    ptr = &t;
    cout << ptr->get();
}
