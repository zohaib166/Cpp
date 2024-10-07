#include <iostream>
using namespace std;

void insertionSort(int A[], int size, int gap)
{
    int i=1,j;
    for(i=gap; i<size; i++) 
    {
        j = i;
        int temp = A[i];
        while(j>=gap && A[j-gap]>temp) {
            A[j] = A[j-gap];
            j-=gap;
        }
        A[j] = temp;
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

void shellSort(int A[], int size)
{
    for(int gap = size/2; gap > 0; gap/=2) 
    {
        insertionSort(A,size,gap);
    }

}

int main() 
{
    int A[] = {234,56,123,78,567,321,431};
    int size = sizeof(A)/sizeof(A[0]);

    printArray(A,size);

    shellSort(A,size);

    printArray(A,size);

}