#include <iostream>
using namespace std;

class Base {
	private:
	int x;
	protected:
	int y;
	public:
	int z;
};

class Derived: Base {
	
};

class Derived2: public Derived {
	public:
	void display() {
		cout << "Variables from Derived Class" << endl;
		cout << x << " " << y << " " << z << endl;
	}
};

int main() {
	Derived obj;
	
}