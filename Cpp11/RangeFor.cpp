#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main() {
    vector <int> v {0, 1, 2, 3, 4, 5};
    for(auto i: v) cout << i << ' ';
    cout << endl;

    for(int n: {0, 1, 2, 3, 4, 5}) cout << n << ' ';
    cout << endl;

    int a[] = {0, 1, 2, 3, 4, 5};
    for(int i: a) cout << i << ' ';
    cout << endl;

    //just iterating a loop for every array element
    for (int n : a) cout << "In loop" << ' '; cout << endl;

    //print string characters
    string name = "zohaib";
    for(auto x: name) cout << x << ' '; cout << endl;

    map<int, int> MAP ({{1,1},{2,4},{3,9}});
    for(auto i: MAP) cout << i.first << ", " << i.second << endl;


}