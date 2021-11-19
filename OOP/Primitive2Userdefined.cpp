#include <iostream>
using namespace std;
class Time {
    int hr;
    int min;
public:
    Time() {}
    Time(int duration) {
        hr = duration/60;
        min = duration%60;
    }
    void Display() {
        cout << hr << " hours, " 
        << min << " mins\n";
    }
};
int main() {
    int duration=75;
    Time T1;
    T1 = duration;
    T1.Display();
}
