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
    friend ofstream& operator<<(ofstream& ofs, Employee &e);
        
};

ofstream& operator<<(ofstream& ofs, Employee &e) {
    ofs<<e.emp_id<<"\t"<<e.name<<"\t"<<e.salary<<endl;
    return ofs;
}       

int main() {
    Employee e1(1,"Michael",450.50f);
    Employee e2(2,"Johannes",320.78f);
    ofstream ofile("Employee.txt");
    if(!ofile) {
        cerr<<"File not opened\n";
        return -1;
    }
    ofile<<e1;
    ofile<<e2;
    cout<<"Content Written to file\n";
    ofile.close();
}
