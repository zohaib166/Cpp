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
    friend Matrix operator*(Matrix &a, Matrix &b);
    int getRows() { return _rows; }
    int getCols() { return _cols; }
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
Matrix operator*(Matrix &a, Matrix &b) {
    int row = b.getRows();
    int col = a.getCols();
    Matrix c(row,col);
    if(row==col) {
        for(int i=0;i<row;i++) {
            for(int j=0;j<col;j++) {
                for(int k=0;k<col;k++) {
                    c.num[i][j] = a.num[i][k]*b.num[k][j];
                }
            }
        }
    } else {
        cout<<"Row and column does not match"<<endl;
        c.fillMatrix();
    }
    return c;
}
void Matrix::showMatrix() {
    cout<<"Matrix:"<<endl;
    for(int i=0;i<_rows;i++) {
        for(int j=0;j<_cols;j++) {
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Matrix x1(3,3),x2(3,3),x3(3,3);
    x1.fillMatrix();
    x1.showMatrix();
    x2.fillMatrix();
    x2.showMatrix();
    //x3 = x1*x2;
    //x3.showMatrix();
}