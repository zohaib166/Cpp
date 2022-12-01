#include<iostream>
using namespace std;
int num = 10;
int& func() {
    //int x = 17;
    return num;
}

int main()
{
    func() = 12;
    cout << num << endl;
    return 0;
}