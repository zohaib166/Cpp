#include <iostream>
#include <map>
using namespace std;
map<char,int> roman {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
int main() 
{
    string str = "CM";
    int decimal = 0;
    for(int i=0;i<str.length();i++) 
    {
        if(str[i]>=str[i+1]) {
            decimal = decimal + roman[str[i]];
        } else {
            decimal = decimal - roman[str[i]]; 
        }
    }
    cout << decimal;
}