#include <iostream>
using namespace std;

void selectionSort(int A[], int size)
{
    for(int i=0; i<size; i++)
    {
        int j=i;
        int min = i;
        for( ;j<size;j++)
        {
            if(A[j] < A[min])
            {
                min = j;
            }
        }
        swap(A[min],A[i]);
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

    selectionSort(A,size);

    printArray(A,size);

}