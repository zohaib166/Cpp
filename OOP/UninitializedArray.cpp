#include <iostream>
using namespace std;

class test
{
    int i;
public:
    test(){}
    test(int a) { i=a; }
    int get() { return i; }
};

int main() {
    test obj[3];
}
