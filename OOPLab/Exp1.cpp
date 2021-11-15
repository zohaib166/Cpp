#include <iostream>
using namespace std;
int getMax(int arr[],int size) {
    int maxi=arr[0];
    for(int i=1;i<size;i++) {
        if(maxi<arr[i]) {
            maxi = arr[i];
        }
    }
    return maxi;    
}

int main() {
    int num[] = {9,8,7,6,5,4,10,2,1};
    int maxi = getMax(num,9);
    cout << maxi << endl;
}      
