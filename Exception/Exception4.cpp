#include <iostream>
#include <cstring>
using namespace std;

class MyException:public exception
{
public:
    char *what()
    {
        char *str = new char[20];
        strcpy(str,"My Exception");
        return str;
    }
};

int main() {
    int a=10,b=0,c;
    try{
        if(b==0) throw MyException();
        c = a/b;
        cout << "Answer: "<<c<<endl;
    }catch(MyException e) {
        cout<<e.what()<<endl;
    }
}

