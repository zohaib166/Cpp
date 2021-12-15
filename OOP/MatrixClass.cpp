#include <iostream>
using namespace std;

class Matrix {
public:
int **num;
    int _rows,_cols;
    Matrix();
    Matrix(const int, const int);
    ~Matrix();
    void fillMatrix();
    void showMatrix();
    Matrix operator*(Matrix a);
    void operator=(Matrix a);
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
Matrix Matrix::operator*(Matrix a) {
    //int row = b._rows;
    int col = a._cols;
    Matrix c(_rows,col);
    if(_rows==col) {
        for(int i=0;i<_rows;i++) {
            for(int j=0;j<col;j++) {
                c.num[i][j]=0;
                for(int k=0;k<col;k++) {
                    c.num[i][j] += num[i][k]*a.num[k][j];
                }
            }
        }
    } else {
        cout<<"Row and column does not match"<<endl;
        c.fillMatrix();
    }
    return c;
}
void Matrix::operator=(Matrix a) {
    for(int i=0;i<a._rows;i++) {
        for(int j=0;j<a._cols;j++) {
            num[i][j] = a.num[i][j];
        }
    }
}
void Matrix::showMatrix() {
    cout<<"Matrix:"<<endl;
    for(int i=0;i<_rows;i++) {
        for(int j=0;j<_cols;j++) {
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    Matrix x1(3,3),x2(3,3),x3(3,3);
    x1.fillMatrix();
    x1.showMatrix();
    x2.fillMatrix();
    x2.showMatrix();
    x3 = x1*x2;
    x3.showMatrix();
}