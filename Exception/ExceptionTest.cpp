#include <iostream>
#include <exception>
#include <vector>
using namespace std;

int main()
{
    try {
    // Code that may throw an exception
        vector<int> x = {1,2,3};
        cout << x.at(10);
    } catch (const std::out_of_range& e) {
        std::cerr << "Caught bad_alloc: " << e.what() << std::endl;
    }

}