#include<iostream>
#include<cstring>
using namespace std;

class MyException: public exception {
public:
    char *what() {
        char *errstr = new char[20];
        strcpy(errstr, "This a serious error");
        return errstr;
    }
};

int main()
{
    int a,b;
    cin >> a >> b;
    try {
        if(cin.fail()) {
            throw MyException();
        }
        cout << a+b << endl;
    } catch(MyException e) {
        cout << e.what() << endl;
    }
    return 0;
}