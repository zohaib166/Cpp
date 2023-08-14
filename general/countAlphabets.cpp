#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{
    unordered_map <char,int> freq;
    string str;
    getline(cin, str);
    for(int i=0; i<str.length();i++) {
        if(str[i]!=' ') {
            if(freq.find(str[i]) == freq.end()) {
                freq.insert(make_pair(str[i], 1));
            } else {
                freq[str[i]]++;
            }
        }
    }

    for(auto it: freq) {
        cout << it.first << ":" << it.second << endl;
    }
    return 0;
}