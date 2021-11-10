#include <iostream>
using namespace std;
class MyClass
{
    int x;
public:
    void setX(int i) { x = i; }
    int getX() { return x; }
};
int main()
{
    MyClass obs[4];
    int i;
    for (i = 0; i < 4; i++)
        obs[i].setX(i);
    for (i = 0; i < 4; i++)
        cout<<"obs["<<i<<"]:"<<obs[i].getX()<<"\n";
}