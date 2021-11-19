#include<iostream>
using namespace std;
class HeightMT {
public:
    int mts, cms;
    void showdata()
    {
       cout << mts<<" meters "<<cms<<" centimeters" << endl;
    }
    HeightMT(int x,int y) // parameterized constructor
    {
        mts=x;
        cms=y;
    }
};
class HeightFT {
public:
    int feet, inches;
    HeightFT() // default constructor
    {
        feet=0;
        inches=0;
    }  
    HeightFT(HeightMT d2) {
        int x;
        x=d2.cms+d2.mts*100;
        x=x/2.5;
        feet=x/12;
        inches=x%12;
    }
    void showdata()
    {
        cout << feet<<" feet "<<inches<<" inches" << endl;
    }
};
int main()
{
    HeightMT d1(9,10);
    HeightFT d2;
    d2=d1;
    d1.showdata(); //to display meter cm values
    d2.showdata(); //to display ft inches values
    return 0;
}
