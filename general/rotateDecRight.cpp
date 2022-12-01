#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int num) {
    int count=0;
    while(num>0) {
        count++;
        num/=10;
    }
    count--;
    return count;
}

int power10(int num) {
    int x = 1;
    while(num>0) {
        x*=10;
        num--;
    }
    return x;
}

//rotate once
void rotateRight(int& num) {
    int src_num = num;
    int digitCount = log10(src_num);
    //cout << digitCount << endl;
    int multiplier =  power10(digitCount);
    //cout << multiplier << endl;
    int lastDigit = src_num%10;
    src_num = src_num/10;
    //cout << lastDigit << endl;
    num = lastDigit*multiplier + src_num;
}
//rotate anytimes
int rotateRight(int num, int shiftAmount) {
    int result;
    int digitCount = countDigit(num);
    int multiplier = power10(digitCount);
    while(shiftAmount>0) {
        num = num%10 * multiplier + num/10;
        shiftAmount--;
    }
    result = num;
    return result;
}
int main()
{
    int num;
    cin >> num;
    cout << rotateRight(num,3);
    return 0;
}