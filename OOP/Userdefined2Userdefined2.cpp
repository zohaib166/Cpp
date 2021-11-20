#include <iostream>
using namespace std;
class Minute {
public:
    int mins;
    Minute() {}
    void show() {
        cout << "Total minutes: " << mins << endl;
    }   
};
class Time {
    int hrs,mins;
public:
    Time(int h, int m) {hrs=h;mins=m;}
    Time() {"cout<<Default Time Created\n";}
    operator Minute() {
        Minute m;
        m.mins = hrs*60+mins;
        return m;
    }
    void show() {
        cout<<"Hour: "<<hrs<<endl;
        cout<<"Minutes: "<<mins<<endl;
    }
};
int main() {
    Time t1(3,40);
    Minute m;
    m=t1;
    t1.show();
    m.show();
}
