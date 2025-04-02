#include <iostream>
using namespace std;

// Generic class for Bank Account
template <typename T>
class BankAccount {
private:
    string accountHolder;
    T balance;  // Balance can be int, float, or double

public:
    // Constructor
    BankAccount(string name, T initialBalance) : accountHolder(name), balance(initialBalance) {}

    // Deposit function
    void deposit(T amount) {
        balance += amount;
        cout << "Deposited: " << amount << ". New balance: " << balance << endl;
    }

    // Withdraw function
    void withdraw(T amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << ". New balance: " << balance << endl;
        }
    }

    // Display account details
    void display() {
        cout << "Account Holder: " << accountHolder << ", Balance: " << balance << endl;
    }
};

// Main function to test the BankAccount class
int main() {
    // Creating an account with double balance
    BankAccount<double> acc1("Alice", 1000.50);
    acc1.display();
    acc1.deposit(500.75);
    acc1.withdraw(300.25);

    cout << "\n";

    // Creating an account with int balance
    BankAccount<int> acc2("Bob", 2000);
    acc2.display();
    acc2.deposit(1000);
    acc2.withdraw(500);

    return 0;
}
/*
Account Holder: Alice, Balance: 1000.5
Deposited: 500.75. New balance: 1501.25
Withdrawn: 300.25. New balance: 1201

Account Holder: Bob, Balance: 2000
Deposited: 1000. New balance: 3000
Withdrawn: 500. New balance: 2500

*/