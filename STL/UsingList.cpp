#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> x{10,12,14,16};
    list<int>::iterator itr;
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

    x.push_back(20);
    x.push_back(22);

    x.pop_back();
    for(int i:x) {
        cout<<i<<" ";
    }
    cout<<endl;
}
