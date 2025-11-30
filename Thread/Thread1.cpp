#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;
int counter = 0;

void incrementCounter(int id) {
    
    for (int i = 0; i < 10; ++i) {
        cout << " " << id;
        lock_guard<mutex> lock(mtx);
        ++counter;
    }
}

int main() {
    thread t1(incrementCounter, 1);
    thread t2(incrementCounter, 2);

    t1.join();
    t2.join();

    cout << "Final counter value: " << counter << endl;
    return 0;
}
