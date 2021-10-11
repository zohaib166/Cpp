#include <iostream>

using namespace std;

int main() {
    int current_sem;
    float sgpa_sem[8], cgpa;
    int total_credit[8];
    float sum_sgpa_credit=0;
    int sum_credit=0;
    cout << "Enter the semester whose CGPA you want to find: ";
    cin >> current_sem;
    for(int i=0;i<current_sem;++i) {
        cout<< "\nEnter the SGPA and total credits for sem " << i+1 << ": ";
        cin >> sgpa_sem[i] >> total_credit[i];

    }
    for(int i=0;i<current_sem;i++) {
        sum_sgpa_credit = sum_sgpa_credit + sgpa_sem[i]*total_credit[i];
        sum_credit = sum_credit + total_credit[i];
    }

    cgpa = sum_sgpa_credit/sum_credit;
    cout.precision(3);
    cout << "\nThe CGPA is: " << cgpa << endl;
}
