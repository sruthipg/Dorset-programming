#include <iostream>
#include <stdexcept>  // For exception classes
#include <string>

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initial_balance) : balance(initial_balance) {}

    void deposit(double amount) {
        if (amount <= 0) {
            throw std::invalid_argument("Deposit amount must be positive.");
        }
        balance += amount;
        std::cout << "Deposited " << amount << ". New balance: " << balance << std::endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            throw std::invalid_argument("Withdrawal amount must be positive.");
        }
        if (amount > balance) {
            throw std::out_of_range("Insufficient funds.");
        }
        balance -= amount;
        std::cout << "Withdrew " << amount << ". New balance: " << balance << std::endl;
    }

    void transfer(BankAccount& to, double amount) {
        if (amount <= 0) {
            throw std::invalid_argument("Transfer amount must be positive.");
        }
        if (amount > balance) {
            throw std::out_of_range("Insufficient funds for transfer.");
        }
        balance -= amount;
        to.balance += amount;
        std::cout << "Transferred " << amount << " to the other account." << std::endl;
    }

    double get_balance() {
        return balance;
    }
};

int main() {
    BankAccount account1(1000);  // Account 1 starts with a balance of 1000
    BankAccount account2(500);   // Account 2 starts with a balance of 500

    try {
        account1.deposit(-500);  // This will throw an invalid_argument exception
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        account1.withdraw(1200);  // This will throw an out_of_range exception
    } catch (const std::out_of_range& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        account1.transfer(account2, 1500);  // This will throw an out_of_range exception
    } catch (const std::out_of_range& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Correct operations
    try {
        account1.deposit(500);   // Deposit successful
        account1.withdraw(200);  // Withdrawal successful
        account1.transfer(account2, 300);  // Transfer successful
    } catch (const std::exception& e) {
        std::cout << "General Error: " << e.what() << std::endl;
    }

    std::cout << "Final balance in account 1: " << account1.get_balance() << std::endl;
    std::cout << "Final balance in account 2: " << account2.get_balance() << std::endl;

    return 0;
}
