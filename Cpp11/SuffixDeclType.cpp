#include <iostream>
using namespace std;

//C++11
/*
template <class T, class U>
auto mul(T x, U y) -> decltype(x*y) { return x*y; }
*/

//C++14 - auto semantics
/*
template <class T, class U>
auto mul(T x, U y) { return x*y; }
*/

//C++14 -decltype semantics
template <class T, class U>
decltype(auto) mul(T x, U y) { return x*y; }

int main() {
    cout << mul(3, 4.5) << endl;
}