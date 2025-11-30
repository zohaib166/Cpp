#include <iostream>
#include <thread>

using namespace std;

void func(int x) {
    for(int i=0; i<5; i++) {
        cout << "Thread " << x << " doing task... " << i << endl;
    }
}

int main()
{
    cout << "Main thread working..." << endl;
    thread t1(func, 1);
    thread t2(func, 2);

    t1.join();
    t2.join();
    cout << "Main thread finishing job\n";
}