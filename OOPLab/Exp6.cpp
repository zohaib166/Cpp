#include <iostream>
using namespace std;
class Student {
    int id;
    string name;
public:
    Student() {}
    Student(int id, string name) {
        this->id = id;
        this->name = name;
    }
    int getId() {
        return id;
    }
    string getName() {
        return name;
    }
    virtual void display() {
        cout<<"("<<id<<","<<name<<")"<<endl;
    }
};
class Employee {
    string post;
public:
    Employee() {}
    Employee(string post) {
        this->post = post;
    }
    string getPost() {
        return post;
    }
};
class Trainee:public Student,public Employee {
public:
    Trainee(){}
    Trainee(int id, string name,string post):Student(id,name),Employee(post) {
    }
    
    void display() {
        cout<<"("<<getId()<<","<<getName()<<","<<getPost()<<")"<<endl;
    }
};
int main() {
    Trainee x(2,"Zohaib Hasan","Software Engg");
    x.display();
}
