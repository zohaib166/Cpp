#include <iostream>
using namespace std;

void insertionSort(int A[], int size, int factor)
{
    int i=1,j;
    for(i=1; i<size; i++) 
    {
        j = i-1;
        int temp = A[i];
        while(j>=0 && (A[j]/factor)%10 > (temp/factor)%10 ) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
}

int findMax(int A[], int size)
{
    int maxi = A[0];
    for(int i=1;i<size; i++)
    {
        if(A[i] > maxi)
        {
            maxi = A[i];
        }
    }
    return maxi;
}

void printArray(int A[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void radixSort(int A[], int size) 
{
    int maxi = findMax(A,size);
    for(int i=1; maxi/i > 0; i*=10)
    {
        insertionSort(A,size,i);
        printArray(A,size);
    }
}

int main() 
{
    int A[] = {234,56,123,78,567,321,431};
    int size = sizeof(A)/sizeof(A[0]);

    printArray(A,size);

    radixSort(A,size);

    //printArray(A,size);

}