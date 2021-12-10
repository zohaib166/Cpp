#include <iostream>
#include <fstream>
using namespace std;
class Employee {
public:
    int emp_id;
    string name;
    float salary;
    Employee() {};
    Employee(int e,string n,float s) {
        emp_id = e;
        name = n;
        salary = s;
    }
    friend ifstream& operator>>(fstream& ifs, Employee &e);
        
};

ifstream& operator>>(ifstream& ifs, Employee &e) {
    ifs>>e.emp_id>>e.name>>e.salary;
    return ifs;
}       

int main() {
    Employee e1;
    ifstream ifile("Employee.txt");
    if(!ifile) {
        cerr<<"File not opened\n";
        return -1;
    }
    while(true) {
        ifile>>e1;
        if(ifile.eof()) break;
        cout<<e1.emp_id<<" "<<e1.name<<" "<<e1.salary<<endl;
    }
    ifile.close();
    cout<<"Content read from file\n";
}
