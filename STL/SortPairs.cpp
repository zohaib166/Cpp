#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

struct compare_by_second {
    bool operator() (const pair<int,int>&left, const pair <int,int> &right) {
        return left.second < right.second;
    }
};

int main() {
    vector <pair<int,int>> cakes;
    cakes.push_back({6,8});
    cakes.push_back({1,5});
    cakes.push_back({9,10});

    sort(cakes.begin(), cakes.end());

    for(auto it: cakes) {
        cout << "(" << it.first << "," << it.second << ")" << endl;
    }
    
}