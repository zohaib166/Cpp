#include<iostream>
using namespace std;

class Employee {
    int id;
    string firstName;
    string lastName;
    int salary; //per month
public:
    Employee(int id, string firstName, string lastName, int salary) {
        this->id = id;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
    }
    int getID() {
        return id;
    }
    string getFirstName() {
        return firstName;
    }
    string getLastName() {
        return lastName;
    }
    string getName() {
        return firstName+" "+lastName;
    }
    int getSalary() {
        return salary;
    }
    void setSalary(int salary) {
        this->salary = salary;
    }
    int getAnnualSalary() {
        return salary*12;
    }
    int raiseSalary(int percent) {
        salary = salary + salary*percent/100;
        return salary;
    } 
    string toString() {
        const string str = "Employee[ id=" + to_string(id) + ", name=" + getName() + ", salary="+ to_string(salary) + " ]";
        return str;
    }
};
int main()
{
    Employee e1(1,"John", "Doe", 20000);
    Employee e2(2,"John", "Wick", 30000);
    cout << e1.toString() << endl;
    cout << e2.toString() << endl;
    e1.raiseSalary(10);
    cout << e1.toString() << endl;
    cout << e2.getAnnualSalary() << endl;
    return 0;
}