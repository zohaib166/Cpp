#include<iostream>
using namespace std;

int main()
{
    string str = "10001111001111100111111";
    int count = 0, count_streak=0, streak = 0, j=0;
    for(int i=0;i<str.length();i++) {
        j=i;
        count_streak = 0;
        if(str[i]=='1') {
            count++;
        }
        while(str[j]=='1' && j<str.length()) {
            count_streak++;
            j++;
        }
        if(streak<count_streak) {
            streak = count_streak;
        }
    }
    //cout << count << endl;
    //cout << streak << endl;
    
    return 0;
}