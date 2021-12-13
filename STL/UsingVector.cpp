#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> x{10,12,14,16};
    vector<int>::iterator itr;
    cout<<"Accessing vector using iterator\n";
    for(itr=x.begin();itr!=x.end();itr++) {
        cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<"Accessing vector using for each\n";
    for(int i:x) {
        cout<<i<<" ";
    }
    cout<<endl;
    //Common for loop works only vectors
    cout<<"Accessing vector using for loop\n";
    for(int i=0;i<x.size();i++) {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    x.push_back(20);
    x.push_back(22);
    for(int i=0;i<x.size();i++) {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    x.pop_back();
    for(int i=0;i<x.size();i++) {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
