#include <iostream>
using namespace std;

void func(int x) {
    cout << "Hello World:"<<x;
}
int main() {
    //assign pointer to a function
    void (*fptr)(int) = &func;
    //calling the function using pointer
    (*fptr)(3);
}
