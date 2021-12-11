#include <iostream>
using namespace std;
int division(int x, int y)
{
    if(y==0) throw -1;
    return x/y;
}
int main()
{
    int a=3,b=0,c;
    try {
        c=division(a,b);
    } catch(int e) {
        cout<<"Exception: Division by zero"<<endl;
    }
    cout << "bye" << endl;
}


