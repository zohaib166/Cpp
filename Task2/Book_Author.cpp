#include <iostream>
using namespace std;

class Author
{
private:
    string name;
    string email;
    char gender;
public:
    Author(string name, string email, char gender)
    {
        this->name = name;
        this->email = email;
        this->gender = gender;
    }
    string getName() {
        return name;
    }
    string emailName() {
        return email;
    }
    void setEmail(string email) {
        this->email = email;
    }

   char getGender() {
        return gender;
    }

    string toString() {
        string str = "Author[name=" + name + ", email=" + email + ", gender=" + gender+"]";
        return str;
    }
};

int main() {
    Author a("Zohaib Hasan", "zohaib.cs@global.org.in", 'M');
    a.toString();
}