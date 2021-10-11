#include <iostream>

using namespace std;

int main() {
    int count=0;
    for(int i=0;i<=1000;i++) {
        if(i%5==0) {
            count++;
        }
    }
    cout << count << endl;
}
