#include <iostream>
using namespace std;
class Time {
    int hr,min;
public:
    Time(int h=0,int m=0) {
        hr=h;min=m;
    }
    operator int() {
        return hr*60+min;
    }
};
int main() {
    int timeInMinutes;
    Time t(3,30);
    cout<<"Conversion from user defined to Primitive\n";
    //method 1
    timeInMinutes = t;
    cout<<timeInMinutes<<endl;
    //method 2
    timeInMinutes = t.operator int();
    cout<<timeInMinutes<<endl;
}
