#include <iostream>
using namespace std;

class test
{
    int i;
public:
    test(int a) { i=a; }
    int get() { return i; }
};

int main() {
    test obj[3] = {1,2,3};
    //same as
    //test obj[3] = {test(1), test(2), test(3)};
    for(int i=0;i<3;i++)
        cout << obj[i].get() << " ";
}
