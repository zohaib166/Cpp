#include <iostream>
using namespace std;

void insertionSort(int A[], int size)
{
    int i=1,j;
    for(i=1; i<size; i++) 
    {
        j = i-1;
        int temp = A[i];
        while(j>=0 && A[j]>temp) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
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

    insertionSort(A,size);

    printArray(A,size);

}