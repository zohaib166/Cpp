#include <iostream>
#include <fstream>
using namespace std;
class Employee {
public:
    int emp_id;
    string name;
    float salary;
    Employee(int e,string n,float s) {
        emp_id = e;
        name = n;
        salary = s;
    }
};

int main() {
    Employee e1(1,"Michael",450.50f);
    Employee e2(2,"Johannes",320.78f);
    ofstream ofile("Employee.txt");
    if(!ofile) cerr<<"File not opened\n"; return -1;
    ofile<<e1.emp_id<<"\t"<<e1.name<<"\t"<<e1.salary<<"\n";
    ofile<<e2.emp_id<<"\t"<<e2.name<<"\t"<<e2.salary<<"\n";
    cout<<"Content Written to file\n";
    ofile.close();
}
