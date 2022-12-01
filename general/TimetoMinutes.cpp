#include<iostream>
using namespace std;

class Time {
    public:
    int hr, min;
    operator int() {
        return (hr*60+min);
    }
    Time() {
        hr = 0;
        min = 0;
    }

    Time(int hr, int min) {
        this->hr = hr;
        this->min = min;
    }

    Time(int d) {
        hr = d/60;
        min = d%60;
    }

    void display() {
        cout << hr << " hours " << min << " mins\n";
    }
};

int main()
{
    Time x(3,20);
    int duration = (int) x;
    cout << duration << " mins" << endl;
    Time y = duration;
    y.display();
    return 0;
}