#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

template <typename T>
class MyClass
{
private:
    std::vector<T> elems;
public:
    //Default Ctor
    MyClass(): elems({-1}) { std::cout << "Default Constructor: "; ShowElements(); }
    //Parameterized Ctor
    MyClass(int b): elems({b}) { std::cout << "Parameterized Constructor: "; ShowElements(); }
    //Ctor using initializer list
    MyClass(std::initializer_list<T> init_list): elems({init_list}) {
        std::cout<<"Initializer List Constructor: "; ShowElements();
    }
    //Mixed constructor
    MyClass(int i, std::initializer_list<T> init_list): elems({init_list}) {
        std::cout<<"Mixed Ctor: " << i << ", "; ShowElements();
    }

    void ShowElements() {
        std::cout << "{";
        for(auto it=elems.begin(); it != elems.end(); it++) std::cout << *it;
        std::cout << "}\n";
    }
};

int main() {
    MyClass<int> my_obj; //default ctor
    MyClass<int> my_obj1(500); //parameterized ctor
    MyClass<int> my_obj2{500}; //Initializer list ctor


    auto init_list = { 1,2,3,4,5 };
    MyClass<int> my_obj3 = { init_list };
    std::initializer_list<std::string> my_obj4 = {"hello", "from", "zohaib"};

    MyClass<std::string> my_obj5 = { my_obj4 }; //initlist ctor
    MyClass<std::string> my_obj6 = {5, {"Thank", "You"}}; //mixed ctor
}


