#include <iostream>
using namespace std;
const int SIZE = 10;
template <class StackType>
class stack {
    StackType stck[SIZE];
    int top;
public:
    stack() { top = -1; }
    void push(StackType obj);
    StackType pop();
};

template <class StackType> 
void stack<StackType>::push(StackType ob)
{
    if(top==SIZE-1) {
        cout<<"Stack is full"<<endl;
        return;
    }
    top++;
    stck[top] = ob;
}
template <class StackType>
StackType stack<StackType>::pop()
{
    if(top==-1) {
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    return stck[top--];
}
int main()
{
    stack<char> s1;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    for(int i=0;i<3;i++) {
        cout<<"Pop stack1: "<<s1.pop()<<endl;
    }

    stack<int> s2;
    s2.push(1);
    s2.push(3);
    s2.push(4);
    for(int i=0;i<3;i++) {
        cout<<"Pop stack2: "<<s2.pop()<<endl;
    }

    return 0;
}
