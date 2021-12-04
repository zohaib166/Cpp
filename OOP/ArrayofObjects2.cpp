#include <iostream>
using namespace std;

class test
{
    int i,j;
public:
    test(int a, int b) { i=a; j=b; }
    int geti() { return i; }
    int getj() { return j; }
};

int main() {
    test obj[3] = { test(1,2), test(3,4), test(5,6) };
    for(int i=0;i<3;i++)
        cout << obj[i].geti() << "," << obj[i].getj() << endl;
}
