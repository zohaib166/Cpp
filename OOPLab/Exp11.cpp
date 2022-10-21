#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int id;
    string name;
    string branch;
    int input();
    int output();
};

int Student::input() {
    ofstream file_obj;
    //opening file to write
    file_obj.open("student.txt",ios::out);
    //preparing student object
    Student s;
    int sid = 1;
    string sname = "Anil Patel";
    string dept = "IT";
    s.id = sid;
    s.branch = dept;
    s.name = sname;
    cout<<"Writing Object 1 to file"<<endl;
    file_obj.write((char*)&s, sizeof(s));
    sid = 2;
    sname = "Chandan Garg";
    dept = "CS";
    s.id = sid;
    s.branch = dept;
    s.name = sname;
    cout<<"Writing Object 2 to file"<<endl;
    file_obj.write((char*)&s, sizeof(s));
    file_obj.close();
}
int Student::output() {
    ifstream file_obj;
    // Opening file in input mode
    file_obj.open("student.txt", ios::in);
    Student s;
    int i; string n; string b;
    cout<<"Reading objects from file"<<endl;
    file_obj.read((char*)&s, sizeof(s));
    while (!file_obj.eof()) {
        i = s.id;
        n = s.name;
        b = s.branch;
        cout<<i<<" "<<n<<" "<<b<<endl;
        // Checking further
        file_obj.read((char*)&s, sizeof(s));
    }
    file_obj.close();
}
int main()
{
    Student s;
    s.input();
    s.output();
    return 0;
}
