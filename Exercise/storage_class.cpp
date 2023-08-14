#include<iostream>

using namespace std;
//global variable
int global_var;
int main()
{
    
    global_var = 5;
    global_var++;
    cout << global_var << endl;

    //local variable
    int local_var = 10;
    local_var++;
    cout << local_var << endl;

    const int const_var = 5;
    //x++; // error
    cout << const_var << endl;
    //volatile variable
    volatile int volatile_val = 15;
    cout << volatile_val << endl;

    
    cout << ext_x << endl;
    return 0;
}