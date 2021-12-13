#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> x{10,12,14,16};
    forward_list<int>::iterator itr;
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
    x.push_front(23);
    for(int i:x) {
        cout<<i<<" ";
    }
    cout<<endl;
    int list_size = distance(x.begin(),x.end());
    cout<<list_size<<endl;
}
