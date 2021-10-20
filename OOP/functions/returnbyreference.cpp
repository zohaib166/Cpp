#include <iostream>
using namespace std;
int var = 34;
int& func(int& ref_var) {
    //int &ref_Var = var;
    return ref_var;
}

int main() 
{
    cout << "Original global var: " << var << endl;
    func(var) = 45;
    cout << "Global var changed: " << var << endl;
}


