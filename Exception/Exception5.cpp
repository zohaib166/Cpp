#include <iostream>
using namespace std;
int main() {
    try {
        throw 'a';
    } catch(int e) {
        cout<<"integer exception"<<endl;
    } catch(double e) {
        cout<<"double exception"<<endl;
    } catch(...) {
        cout<<"all exception"<<endl;
    }
}

