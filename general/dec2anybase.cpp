#include<iostream>
#include<vector>
using namespace std;

vector <char> dec2anybase(int num, int base) {

    vector<char>answer;
    while(num>0) {
        answer.push_back(num%base + 48);
        num = num/base;
    }
    return answer;
}

int main()
{
    vector <char>x = dec2anybase(123, 8);
    string answer = "";
    for(auto i=x.rbegin(); i!=x.rend(); i++) {
        answer.push_back(*i);
    }
    cout << answer;
    return 0;
}