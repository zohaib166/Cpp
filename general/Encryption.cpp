#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


string encryption(string s) {
    int L = s.length();
    int rows = floor(sqrt(L));
    int cols = ceil(sqrt(L));
    if(rows * cols < L) {
        rows = cols;
    }
    int k=0;
    char block[rows][cols] = {1};
    
    cout << rows << " " << cols << endl;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            if(k<L)
                block[i][j] = s[k++];
            else
                block[i][j] = '#';
        }
        
    }
    
    string cypher = "";
    
    for(int i=0;i<cols;i++) {
        int j;
        for(j=0;j<rows;j++) {
            if(block[j][i] == '#') continue;
            cypher.push_back(block[j][i]);
        }
        if(i < cols - 1)
            cypher.push_back(' ');
        
    }
    
    return cypher;
    
}

int main()
{
    string s;
    getline(cin, s);

    string result = encryption(s);

    cout << result << "\n";
    return 0;
}
