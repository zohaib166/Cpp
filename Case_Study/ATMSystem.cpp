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

void SavingsAccount::displayInfo() {
    cout << "x------------Account Info-------------x\n";
    cout << "Account type: Savings\n";
    cout << "Account Number: " << accountNumber << endl;
    cout << "Holder Name: " << accountHolder << endl;
    cout << "Account Balance: " << balance << endl;
    cout << "Interest Rate: " << interestRate << endl;
}

class CheckingAccount:Account {
private:
    double overdraftLimit;
public:
    CheckingAccount(int accountNumber, int pin, double balance, 
        string accountHolder, double overdraftLimit): Account(accountNumber, pin, balance, accountHolder);
    void withdraw(double amount);
    void displayInfo();
};

CheckingAccount::CheckingAccount(int accountNumber, int pin, double balance, 
        string accountHolder, double overdraftLimit): Account(accountNumber, pin, balance, accountHolder) 
        {
            this->overdraftLimit = overdraftLimit;
        }

void CheckingAccount::withdraw(double amount) {
    if(balance-amount > -overdraftLimit) {
        balance = balance - amount;
    } else {
        cout << "Overdraft Limit Exceeded\n";
    }
}

void CheckingAccount::displayInfo() {
    cout << "x------------Account Info-------------x\n";
    cout << "Account type: Checking\n";
    cout << "Account Number: " << accountNumber << endl;
    cout << "Holder Name: " << accountHolder << endl;
    cout << "Account Balance: " << balance << endl;
    cout << "OVerdraftLimit: " << overdraftLimit << endl;
}

class ATM {
private:
    vector <Account*> accounts;
    Account* currentAccount;
public:
    void addAccount(Account *acc);
    bool login(int accNum, int pin);
    void logout();
    void processTranasaction();
    ~ATM();
};

void ATM::addAccount(Account *acc) {
    if(acc!=nullptr) {
        
    }
}

        



    

