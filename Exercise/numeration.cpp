/**
 * Convert number till 99 into words
 **/
#include <iostream>
using namespace std;

string one[] = {"","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ", "eleven ", "twelve ","thirteen ","fourteen ", "fifteen ", "sixteen ", "seventeen ","eighteen ","nineteen "};

string ten[] = {"","","twenty ","thirty ","forty ","fifty ", "sixty ", "seventy ","eighty ","ninety "};

string numberToWords(int n, string s) {
    string word = "";
    if(n>19) {
        word = word + ten[n/10] + one[n%10];
    } else {
        word = word + one[n];
    }
    word = word + s;
    return word;
}
int main() {
    int num = 456;
    string out="";
    out += numberToWords((num/100)%10,"hundred ");

    if(num>100) {
        out += "and ";
    }

    out += numberToWords(num%100,"");

    cout << out;

}