#include <iostream>
using namespace std;
/**The function should return true
if the number is a perfect square
else it should return false**/
bool is_perfect_square(int num) {
    //complete this function
    int i=1;
    while(i*i!=num) {
        i++;
        if(i*i>num)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(is_perfect_square(num)) {
        cout << "\nThe number is a perfect square";
    } else {
        cout << "\nThe number is not a perfect square";
    }
}
