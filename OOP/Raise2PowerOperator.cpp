#include <iostream>
#include <cmath>
using namespace std;

class Integer {
private:
    long number;
public:
    Integer() {}
    Integer(long x) {
        number = x;
    }
    Integer operator^(Integer num1) {
        Integer ans;
        ans.number = pow(number, num1.number);
        return ans;
    }
    void display() {
        cout << number << endl;
    }
};

int main() {
    Integer x1(3), x2(4);
    Integer x3 = x1^x2;
    x3.display();
}