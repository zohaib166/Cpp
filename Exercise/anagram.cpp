#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<char, int> umap;
    string str = "gaga";
    int length = str.length();
    
    int mid = length / 2;
    bool is_anagram = true;
    for (int i = 0; i < mid; i++)
    {
        //cout << str[i]<< " ";
        umap[str[i]]++;
    }
    //cout << endl;
    if(length%2==0) {
        mid--;
    }
    for (int i = mid + 1; i < length; i++)
    {
        //cout << str[i]<< " ";
        if (umap.find(str[i]) == umap.end())
        {
            is_anagram = false;
            break;
        }
        else
        {
            umap[str[i]]--;
        }
    }
    for (auto x : umap)
    {
        //cout << x.first << " " << x.second <<endl;
        if(x.second!=0) {
            is_anagram = false;
        }
    }
    if(is_anagram) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}