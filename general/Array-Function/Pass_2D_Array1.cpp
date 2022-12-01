#include <iostream>
using namespace std;

void increment(int **array, int n, int k) 
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array[i][j]+=k;
        }
    }
}

void fillArray(int **array, int n)
{
    cout << "Enter values\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }
}

void showArray(int **array, int n)
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int **array;
    array = new int *[3];
    for (int i = 0; i < 3; i++)
    {
        array[i] = new int[3];
    }
    fillArray(array, 3);
    showArray(array, 3);

    increment(array,3,2);

    showArray(array, 3);
    return 0;
}