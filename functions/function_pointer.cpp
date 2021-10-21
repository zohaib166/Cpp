/**Pointer to the function**/
#include <iostream>
using namespace std;
void func() //function 1 
{
    cout << "hello" << endl;
}

int max(int x, int y) //function 2
{
    return x>=y?x:y;
}

int main()
{
    void (*ptr)(); //declaration
    ptr = func; //initialization
    (*ptr)(); //usage
    
    int (*ptr2)(int, int);
    ptr2 = max;
    cout << (*ptr2)(4,2) << endl;
}
    
    
