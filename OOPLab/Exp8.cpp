#include <iostream>
using namespace std;
double** createMatrix(int rows, int cols) {
    double** mat = new double*[rows]; //Allocate rows.
    for (int i = 0; i < rows; ++i)
    {
        mat[i] = new double[cols](); //Allocate each row and zero initialize.
    }
    return mat;
}
void destroyMatrix(double** &mat, int rows)
{
    if (mat)
    {
        for (int i = 0; i < rows; ++i)
        {
            delete[] mat[i]; //delete each row..
        }

        delete[] mat;  //delete the rows..
        mat = NULL;
    }
}
void showMatrix(double** &mat, int rows, int cols) {
    cout<<endl;
    for (int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout << endl;
    }
}
void fillMatrix(double** &mat, int rows, int cols) {
    for (int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j) {
            cin>>mat[i][j];
        }
    }
}
double** addMatrices(double** &mat1, double** &mat2, int rows, int cols) {
    double **ans = createMatrix(3,3);
    for (int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j) {
            ans[i][j] = mat1[i][j]+mat2[i][j];
        }
    }
    return ans;
}
double** subtractMatrices(double** &mat1, double** &mat2, int rows, int cols) {
    double **ans = createMatrix(3,3);
    for (int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j) {
            ans[i][j] = mat1[i][j]-mat2[i][j];
        }
    }
    return ans;
}
int main() {
    double **m1 = createMatrix(3,3);
    double **m2 = createMatrix(3,3);
    cout<<"Enter the values for matrix1:"<<endl;
    fillMatrix(m1,3,3);
    cout<<"Enter the values for matrix2:"<<endl;
    fillMatrix(m2,3,3);
    double **addition = addMatrices(m1,m2,3,3);
    double **subtraction = subtractMatrices(m1,m2,3,3);
    cout<<"Addition:";
    showMatrix(addition,3,3);
    cout<<"Subtraction:";
    showMatrix(subtraction,3,3);

    cout<<"cleaning up...."<<endl;
    destroyMatrix(m1,3);
    destroyMatrix(m2,3);
    destroyMatrix(addition,3);
    destroyMatrix(subtraction,3);
}
