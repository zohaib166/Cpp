#include <iostream>
using namespace std;
class student {
    int rollno;
    string name;
public:
    void setRollNo(int rollno) {
        this->rollno = rollno;
    }
    void setName(string name) {
        this->name = name;
    }
};
int main() {
    student s1;
    s1.setRollNo(23);
    s1.setName("Vipul");
}
