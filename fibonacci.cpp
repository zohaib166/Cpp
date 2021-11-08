#include <iostream>
using namespace std;
/**
A Fibonacci series is one in which next term is the addition
of last two terms. It goes like this 0,1,1,2,3,5,8,13,21...
Write a function that returns the Nth term of this series
**/
int fibonaaci(int N) {
    //complete this function
    if(N==1) return 0;
    if(N==2) return 1;
    int ft=0,st=1;
    int nt;
    while(N>2) {
        nt=ft+st;
        ft=st;
        st=nt;
        N--;
    }
    return nt;
}
int main()
{
    cout<<"25th term of Fibonacci series is: "<<fibonaaci(7)<<endl;
    cout<<"11th term of Fibonacci series is: "<<fibonaaci(1)<<endl;
}
