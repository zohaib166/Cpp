#include <iostream>
using namespace std;
class Father {
private:
    int x;
    int *num;
public:
    Father() {
        num = new int[20];
    }
    ~Father() {
        delete[] num;
    }
    void setArr(int size) {
        for(int i=0;i<size;i++) {
            cin >> num[i];
        }
    }
    void showArr(int size) {
        for(int i=0;i<size;i++) {
            cout<<num[i]<<" ";
        }
        cout << "\n";
    }
    void setX(int x) {
        this->x = x;
    }
    int getX() {
        return x;
    }
};
class Son:public Father {};
int main() {
    Son obj;
    obj.setX(10);
    cout << obj.getX() << endl;
    obj.setArr(5);
    obj.showArr(5);
}
