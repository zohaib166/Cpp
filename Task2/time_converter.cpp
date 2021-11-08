#include<iostream>
using namespace std;
/**
Convert 24 hour time format into 12 hour time format
The function output is expected to be as follows
hour = 23, minute = 23
Output: 11:23 PM
**/
void time_converter(int hour, int minute) {
    //complete this function
    if(hour<1 || hour>23 || minute<1 || minute>59) {
        cout<<"invalid input"<<endl;
        return;
    }
    cout<<hour%12<<":";
    if(minute>9)
        cout<<minute;
    else
        cout<<"0"<<minute;
    if(hour>12)
        cout << " PM"<<endl;
    else
        cout << " AM"<<endl;
}
int main()
{
    time_converter(20,25); //expected output: 8:25 PM
    time_converter(4,5); // expected output: 4:05 AM
}
