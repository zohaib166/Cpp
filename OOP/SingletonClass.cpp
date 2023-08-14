#include <iostream>
using namespace std;

class Printer {
    bool blackNWhite, bothSided;
    Printer(bool bw = false, bool bs = false):blackNWhite(bw), bothSided(bs) {
        cout << "Printer Constructed" << endl; //private printer cannot be constructed !!!
    }
    static Printer *myPrinter; //pointer to the instance of singleton printer
public:
    ~Printer() {
        cout << "Printer Destructed" << endl;
    }
    //return const pointer to the printer object of no already created
    static const Printer* getPrinter(bool bw=false, bool bs=false) {
        if(!myPrinter) myPrinter = new Printer(bw, bs);
        return myPrinter;
    }
    void print(int nP) const {
        cout << "Printing " << nP << " pages" << endl;
    }
};

Printer *Printer::myPrinter = 0; //initilization of static pointer to the printer instance

int main()
{
    Printer::getPrinter()->print(10);
    Printer::getPrinter()->print(20);

    delete Printer::getPrinter();
}