#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Employee {
public:
    char name[80];
    int emp_id;
    double gross_pay;

    Employee() {
        strcpy(name,"");
        emp_id = 0;
        gross_pay = 0.0;
    }
    Employee(char* n, int id, double pay) {
        strcpy(name,n);
        emp_id = id;
        gross_pay = pay;
    }
};

int main()
{
    Employee emp1("Michael",1,3567.89);

    ofstream ofile("employee", ios::out | ios::binary);
    if(!ofile) {
        cout<<"Cannot open file\n";
        return 1;
    }
    ofile.write((char*) &emp1,sizeof(Employee));
    ofile.close();

    ifstream ifile("employee", ios::in | ios::binary);
    if(!ifile) {
        cout<<"Cannot open file\n";
        return 1;
    }
    ifile.read((char*) &emp1, sizeof(Employee));
    cout<<emp1.name<<endl;
    cout<<emp1.emp_id<<endl;
    cout<<emp1.gross_pay<<endl;
}
