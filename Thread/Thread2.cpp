#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;
vector<int> primes;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void findPrimes(int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            lock_guard<mutex> lock(mtx);
            primes.push_back(i);
        }
    }
}

int main() {
    int range = 5000;
    int midpoint = range / 2;

    // Create two threads to find primes in two halves of the range
    thread t1(findPrimes, 1, midpoint);
    thread t2(findPrimes, midpoint + 1, range);

    // Wait for both threads to complete
    t1.join();
    t2.join();

    // Print the primes found
    cout << "Prime numbers within the first 5000 numbers:\n";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
