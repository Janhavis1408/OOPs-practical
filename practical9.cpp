9.#include <iostream>
#include <exception>
using namespace std;

class BankException : public exception {
public:
    const char* what() const noexcept override {
        return "Banking Error Occurred";
    }
};

class InsufficientBalance : public BankException {
public:
    const char* what() const noexcept override {
        return "Insufficient Balance!";
    }
};

class InvalidAmount : public BankException {
public:
    const char* what() const noexcept override {
        return "Invalid Amount!";
    }
};

class Bank {
    double balance;

public:
    Bank(double b) {
        balance = b;
    }

    void withdraw(double amount) {
        if (amount <= 0)
            throw InvalidAmount();

        if (amount > balance)
            throw InsufficientBalance();

        balance -= amount;
        cout << "Withdrawal Successful!\n";
        cout << "Remaining Balance: " << balance << endl;
    }
};

int main() {
    Bank b(5000);

    double amount;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    try {
        b.withdraw(amount);
    }
    catch (const BankException& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}