#include <iostream>
using namespace std;

class Demo {
public:
    static int objCount;
    Demo() {
        objCount++;
        cout<<"Object no: "<<objCount<< " created"<<endl;
    }
    ~Demo() {
        cout<<"Object no: "<<objCount<< " Destroyed"<<endl;
        objCount--;
    }
};
int Demo::objCount;

int main() {
    Demo d[3];
}
