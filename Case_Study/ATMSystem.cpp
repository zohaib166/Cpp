#include <iostream>
#include <vector>

using namespace std;

class Account
{
protected:
    int accountNumber;
    int pin;
    double balance;
    string accountHolder;
public:
    Account(int accountNumber, int pin, double balance, string accountHolder);
    virtual ~Account();
    bool authenticate(int enteredPin);
    double getBalance();
    void deposit(double amount);
    virtual void withdraw(double amount) = 0;
    virtual void displayInfo() = 0;
};

Account::Account(int accountNumber, int pin, double balance, string accountHolder) {
    this->accountNumber = accountNumber;
    this->pin = pin;
    this->balance = balance;
    this->accountHolder = accountHolder;
}

Account::~Account() {

}

bool Account::authenticate(int enteredPin) {
    if(enteredPin == pin) {
        return true;
    }
    return false;
}

double Account::getBalance() {
    return balance;
}

void Account::deposit(double amount) {
    if(amount > 0) {
        balance += amount;
    }
    cout << "Current Balance: " << balance << endl;
}

//high interest "cannot go below zero" savings account
class SavingsAccount:Account
{
private:
    double interestRate;
public:
    SavingsAccount(int accountNumber, int pin, double balance, string accountHolder, double interestRate);
    void withdraw(double amount);
    void applyInterest();
    void displayInfo();
};

SavingsAccount::SavingsAccount(int accountNumber, int pin, double balance, 
        string accountHolder, double interestRate): Account(accountNumber, pin, balance, accountHolder) 
        {
            this->interestRate = interestRate;
        }

void SavingsAccount::withdraw(double amount) {
    if(balance-amount >= 0) {
        balance = balance - amount;
    } else {
        cout << "Insufficient funds\n";
    }
}

void SavingsAccount::applyInterest() {
    double interestAmount = balance * interestRate;
    balance += interestAmount;
    cout << "Interest Added\n";
}



    

