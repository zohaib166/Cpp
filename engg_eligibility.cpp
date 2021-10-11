#include <iostream>

using namespace std;

int main() {
    int physics, chemistry, maths;

    cout << "Enter the marks obtained in Physics (out of 100): ";
    cin >> physics;
    cout << "\nEnter the marks obtained in Chemistry (out of 100): ";
    cin >> chemistry;
    cout << "\nEnter the marks obtained in Maths (out of 100): ";
    cin >> maths;
    int total_percent = (physics+chemistry+maths)/3;
    if(physics>=40 && chemistry>=40 && maths>=40) {
        if(total_percent>45) {
            cout<<"\nThe student is eligible of Engineering"<<endl;
            return 0;
        } else {
            cout<<"\nThe student is not eligible for Engineering"<<endl;
        }
    } else {
        cout << "\nThe student is not eligible for Engineering"<<endl;
    }
}
