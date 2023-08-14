#include <iostream>
using namespace std;

class PrintJobs {
    int nPages; //# of pages in current job
    static int nTrayPages;  //# of pages in the Tray
    static int nJobs; //# of jobs executing
public:
    PrintJobs(int nP): nPages(nP) {
        ++nJobs;
        cout << "Printing " << nP << " pages" << endl;
        nTrayPages-=nP;
    } //new job started

    ~PrintJobs() {
        --nJobs;
    }

    static int getJobs() {
        return nJobs;
    }
    static int checkPages() {
        return nTrayPages;
    }
    static void loadPages(int nP) {
        nTrayPages+=nP;
    }
    static void currentStatus(){
        cout << "Jobs: " << PrintJobs::getJobs() << endl;
        cout << "Tray Pages: " << PrintJobs::checkPages() << endl;
    }
};

//static variable initilization
int PrintJobs::nTrayPages = 500; //loaded paper initilially
int PrintJobs::nJobs = 0;   //no jobs to start with
int main() {

    PrintJobs::currentStatus();
    PrintJobs j1(10);
    PrintJobs::currentStatus();
    PrintJobs::loadPages(100);
    PrintJobs::currentStatus();
    PrintJobs j2(5), j3(30);
    PrintJobs::currentStatus();

}