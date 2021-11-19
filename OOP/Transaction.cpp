#include <iostream>
using namespace std;

class Transaction {
    static int count;
    static double balance;
    double amount;
public:
    Transaction(double x);
    void credit();
    void debit();
    int getTransactionCount();
    double getBalance();
};
int Transaction::count;
double Transaction::balance;
Transaction::Transaction(double x) {
    amount = x;
}
void Transaction::credit() {
    balance = balance + amount;
    count++;
}

void Transaction::debit() {
    balance = balance - amount;
    count++;
}
int Transaction::getTransactionCount() {
    return count;
}
double Transaction::getBalance() {
    return balance;
}
int main() {
    Transaction a(23.5),b(12.3);
    a.credit();
    b.debit();
    cout << b.getTransactionCount() << "|" << b.getBalance() << endl;
}
