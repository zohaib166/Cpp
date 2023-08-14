#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++) {
        cin >> A[i];
    }
    
    int temp = A[0];
    for(int i=1; i<N-1;i++) {
        A[i] = A[i+1];
    }
    
    A[N-1] = temp;
    
    for(int i=0;i<N;i++) {
        cout << A[i] << " ";
    }
    
    return 0;
}