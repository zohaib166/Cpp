#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,string>item;
    item.insert({1,"Biscuit"});
    item.insert({2,"Jam"});
    item.insert({3,"Icecream"});

    cout << "KEY\tELEMENT\n";
    for (auto itr = item.begin(); itr != item.end(); ++itr) {
        cout << itr->first
            << '\t' << itr->second << '\n';
    }

    for (auto itr = item.begin(); itr != item.end(); ++itr) {
        if(itr->first == 2) {
            item.erase(itr->first);
        }
    }
    cout << "KEY\tELEMENT\n";
    for (auto itr = item.begin(); itr != item.end(); ++itr) {
        cout << itr->first
            << '\t' << itr->second << '\n';
    }

}