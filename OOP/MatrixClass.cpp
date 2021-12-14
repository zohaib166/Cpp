#include <iostream>
using namespace std;

class Matrix {
    int **num;
    int _rows,_cols;
public:
    Matrix();
    Matrix(const int, const int);
    ~Matrix();
    void fillMatrix();
    void showMatrix();
};
Matrix::Matrix() {
    _rows = 2;
    _cols = 2;
    num = new int*[2];
    for(int i=0;i<2;i++) {
        num[i] = new int[2]();
    }
}
Matrix::Matrix(const int rows, const int cols) {
    _rows = rows;
    _cols = cols;
    num = new int*[rows];
    for(int i=0;i<rows;i++) {
        num[i] = new int[cols]();
    }
}
Matrix::~Matrix() {
    if(num) { 
        for(int i=0;i<_rows;i++) {
            delete[] num[i];
        }
        delete[] num;
        num = NULL;
    }
}
void Matrix::fillMatrix() {
    for(int i=0;i<_rows;i++) {
        for(int j=0;j<_cols;j++) {
            cin>>num[i][j];
        }
    }
}
void Matrix::showMatrix() {
    for(int i=0;i<_rows;i++) {
        for(int j=0;j<_cols;j++) {
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Matrix x;
    x.fillMatrix();
    x.showMatrix();
}