#include <iostream>
using namespace std;

void bubbleSort(int A[], int size)
{
    for(int i=0; i<size; i++) 
    {
        for(int j=1; j<size-i; j++)
        {
            if(A[j-1] > A[j]) 
                swap(A[j-1],A[j]);
        }
    }
}

void printArray(int A[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int A[] = {234,56,123,78,567,321,431};
    int size = sizeof(A)/sizeof(A[0]);

    printArray(A,size);

    bubbleSort(A,size);

    printArray(A,size);

}