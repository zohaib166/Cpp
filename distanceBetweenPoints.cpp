#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float x1,y1,x2,y2;
    cout << "Enter the first point (x1,y1)" << endl;
    cin >> x1 >> y1;
    cout << "Enter the second point (x2,y2)" << endl;
    cin >> x2 >> y2;
    float sqpt1 = (x2-x1)*(x2-x1);
    float sqpt2 = (y2-y1)*(y2-y1);
    float result = sqrt(sqpt1 + sqpt2);
    cout << "Distance between two points: " << result;
}
