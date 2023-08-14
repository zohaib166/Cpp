#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "Math";
    cout << "String Length: "<< str.length() << endl;
    cout << "String Size: "<< str.size() << endl;
    cout << "String Capacity: "<< str.capacity() << endl;   
    cout << "Resizing String..."<<endl;
    str.resize(30);   
    cout << "New String Capacity: "<< str.capacity() << endl;
    cout << "Maximum string capacity: "<< str.max_size() << endl;
    cout << "Deleting String using clear function..."<<endl;
    str.clear();
    cout << "String Length: "<<str.length()<<endl;
    cout << "Is String empty: "<<str.empty()<<endl;
    str = "Math";
    str.append("ematics");
    cout << "String after appending: "<<str<<endl;
    str.insert(4,"der");
    cout<<"String after inserting: "<<str<<endl;
    str.replace(4,5,"ww");
    cout<<"String after replacing: "<<str<<endl;
    str.erase();
    cout<<"String after erase: "<<str.length()<<endl;
    str = "Math";
    str.push_back('e');
    cout<<"String after push: "<<str<<endl;
    //str.pop_back(); //works with -std=c++11
    //cout<<"String after pop: "<<str<<endl;
    string str2 = "physics";
    str.swap(str2);
    cout<<"String1: "<<str<<"; String2:" <<str2<<endl;
    
    char new_str[str.size()];
    str.copy(new_str,sizeof(str)); //str.copy(ch,len)
    cout << "String copied in char array: "<<new_str<<endl;
    char new_str2[15];
    str = "Zohaib Hasan";
    str.copy(new_str2,5,7); //str.copy(ch,len,pos)
    new_str2[6]='\0';
    cout << "Part String copied in char array: "<<new_str2<<endl;
    cout << str.find("ha") << endl;
    cout << str.find('s') << endl;
    cout << str.rfind('s') << endl;
    cout << str.find_first_of('a') << endl;
    cout << str.find_last_of('a') << endl;
    cout << str.substr(3,3) << endl;
    cout << str2.compare(str) << endl;
}
