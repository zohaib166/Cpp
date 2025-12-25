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
    int getAccNum();
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

int Account::getAccNum() {
    return accountNumber;
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
class SavingsAccount:public Account
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

class CheckingAccount:public Account {
private:
    double overdraftLimit;
public:
    CheckingAccount(int accountNumber, int pin, double balance, string accountHolder, double overdraftLimit);
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
        accounts.push_back(acc);
    }
}

bool ATM::login(int accNum, int pin) {
    for(Account *x: accounts) {
        if(x->getAccNum() == accNum) {
            if(x->authenticate(pin)) {
                currentAccount = x;
                return true;
            } else {
                cout << "Incorrect Pin\n";
            }
        }
    }
    return false;
}

void ATM::logout() {
    currentAccount = nullptr;
}

void ATM::processTranasaction()
{
    int choice;
    if(currentAccount!=nullptr) {
        do {
            cout << "1. Check Balance\n";
            cout << "2. Deposit\n";
            cout << "3. Withdraw\n";
            cout << "4. Display Details\n";
            cout << "5. Logout\n";
            cout << "Enter your choice, enter 5 to logout:\n";
            cin >> choice;
            if(choice == 1) {
                cout << "Account Balance: " << currentAccount->getBalance() << endl;
            } else if(choice == 2) {
                double amount;
                cout << "Enter the amount to be deposited: ";
                cin >> amount;
                currentAccount->deposit(amount);
            } else if(choice==3) {
                double amount;
                cout << "Enter the amount to be withdrawn: ";
                cin >> amount;
                currentAccount->withdraw(amount);
            } else if(choice==4) {
                currentAccount->displayInfo();
            }
        } while(choice!=5);
    }
}

ATM::~ATM() {
    for(Account *x: accounts) {
        delete x;
    }
    accounts.clear();
}

int main()
{
    ATM obj;
    obj.addAccount(new SavingsAccount(101, 2345, 4523.45, "John Doe", 0.05));
    obj.addAccount(new CheckingAccount(102, 1234, 8212.15, "Daniel Max", 500.00));
    obj.addAccount(new SavingsAccount(103, 1212, 10000.00, "Scarlett Pittsburg", 0.05));
    obj.addAccount(new CheckingAccount(104, 3434, 8212.15, "Arthur Shaw", 1000.00));
    int accno, pin;
    cout << "Welcome to WTF Bank\n";
    cout << "Enter your account number: ";
    cin >> accno;
    cout << "Enter your PIN: ";
    cin >> pin;
    bool attempt = obj.login(accno, pin);
    if(attempt) {
        obj.processTranasaction();
    }
}
