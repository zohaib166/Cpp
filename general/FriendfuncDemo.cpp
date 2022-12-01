#include<iostream>
using namespace std;

class Demo {
private:
    int x,y;
    friend void showData(Demo);
    friend Demo operator-(Demo);
public:
    Demo(int x, int y): x(x), y(y) {}

    
};

void showData(Demo a) {
    cout << a.x << " " << a.y;
}

Demo operator-(Demo num) {
    num.x = -1*num.x;
    num.y = -1*num.y;
    return num;
    
}
int main()
{
    Demo a(3,4);
    -a;
    showData(a);
    return 0;
}