#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex print_mutex;

void func(int x) {
    for(int i=0; i<5; i++) {
        print_mutex.lock();
        cout << "Thread " << x << " doing task... " << i << endl;
        print_mutex.unlock();
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