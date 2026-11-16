
#include <iostream>
#include <string>
using namespace std;

// Base Class
class BankAccount {
private:
    double balance;

protected:
    string accountHolder;

public:
    int accountNumber;

    // Constructor
    BankAccount(string name, int accNo, double bal) {
        accountHolder = name;
        accountNumber = accNo;
        balance = bal;
    }

    // Member Function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived Class
class SavingsAccount : public BankAccount {
public:
    SavingsAccount(string name, int accNo, double bal)
        : BankAccount(name, accNo, bal) {
    }

    void displayAccountType() {
        cout << "Account Type: Savings Account" << endl;
        cout << "Holder Name: " << accountHolder << endl;
    }
};

int main() {
    SavingsAccount s1("Rahul", 101, 5000);

    s1.displayAccountType();

    s1.displayBalance();

    s1.deposit(2000);

    cout << "\nAfter Deposit:" << endl;
    s1.displayBalance();

    return 0;
}
