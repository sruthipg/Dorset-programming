#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Private member

public:
    // Constructor
    BankAccount(double amount) {
        balance = amount;
    }

    // Declaring friend function
    friend void showBalance(BankAccount acc);
};

// Friend function definition
void showBalance(BankAccount acc) {
    cout << "Account Balance: $" << acc.balance << endl;  // Accessing private data
}

int main() {
    BankAccount myAccount(1000.50);  // Creating object
    showBalance(myAccount);  // Calling friend function
    return 0;
}
