#include <iostream>
using namespace std;
const int size = 10; 
class Demo {
    int num[size];
public: 
    void setVal();
    void getVal();
};
void Demo::setVal() {
    for(int i=0;i<size;i++) {
        num[i] = (i+1)*10;
    }
}
void Demo::getVal() {
    for(int i=0;i<size;i++) {
        cout << num[i] << " ";
    }
}
int main() {
    Demo x;
    x.setVal();
    x.getVal();
}