#include<iostream>
using namespace std;
class HeightFt;
class HeightMt {
    public:
    float mts, cms;
    HeightMt() {
        mts = 0;
        cms = 0;
    }
    HeightMt(float m, float c) {
        mts = m;
        cms = c;
    }

    void showHeight() {
        cout << mts << " m " << cms << " cm\n";
    }

    /*operator HeightFt() {
        HeightFt d;
        float x = mts*3.28+cms*0.394;
        d.feet = x / 12;
        d.inch = d.feet - (int) d.feet;
        d.inch = d.inch * 12;
        return d;
    }*/
};
class HeightFt {
    public:
    float feet, inch;
    HeightFt() {
        feet = 0;
        inch = 0;
    }
    HeightFt(float f, float i) {
        feet = f;
        inch = i;
    }
    
    operator HeightMt() {
        HeightMt d;
        float x = feet * 30.48 + inch * 2.54;
        d.mts =  x / 100;
        d.cms = d.mts - (int) d.mts;
        d.cms *= 100;
        d.mts = (int) d.mts;
        return d;
    }
    void showHeight() {
        cout << feet << " ft " << inch << " inch\n";
    }
};


int main()
{
    HeightFt h1(6,0);
    HeightMt h2;
    h2 = h1;
    h2.showHeight();

    return 0;
}