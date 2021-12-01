#include <iostream>
using namespace std;
class Student {
    int id;
    string name;
    float marks1, marks2, marks3;
public:
    Student(){}
    Student(int id, string name) {
        this->id=id;
        this->name=name;
    }
    void setMarks(float m1,float m2,float m3) {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    bool checkEligibility() {
        float ans = (marks1+marks2+marks3)/3;
        if(ans<45) {
            return false;
        }
        return true;
    }
    void printMarksheet() {
        cout<<"\n\n";
        cout<<"----------------------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<id<<endl;
        cout<<"Physics Percentage: "<<marks1<<endl;
        cout<<"Chemistry Percentage: "<<marks2<<endl;
        cout<<"Maths Percentage: "<<marks3<<endl;
        cout<<"----------------------------------"<<endl;
    }
};
int main() {
    int sid;
    string name;
    float m1, m2, m3;
    cout<<"Enter Roll Number: "<<endl;
    cin>>sid;
    cout<<"Enter Name: "<<endl;
    cin>>name;
    cout<<"Enter marks of Physics, Chemistry and Maths: "<<endl;
    cin>>m1>>m2>>m3;
    Student s1(sid, name);
    s1.setMarks(m1,m2,m3);
    s1.printMarksheet();
    if(s1.checkEligibility()) {
        cout<<"Eligible for engineering"<<endl;
    } else {
        cout<<"Not Eligible for engineering"<<endl;
    }
}
