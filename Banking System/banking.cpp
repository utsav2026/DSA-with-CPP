#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal = 0) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    double getBalance() { return balance; }

    virtual void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};
class SavingsAccount : public BankAccount {
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal), interestRate(rate) {}

    void calculateInterest() {
        double interest = balance * interestRate / 100;
        cout << "Interest Earned: " << interest << endl;
    }
};
class CheckingAccount : public BankAccount {
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string name, double bal, double limit)
        : BankAccount(accNo, name, bal), overdraftLimit(limit) {}

    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Withdrawal exceeds overdraft limit!" << endl;
        }
    }
    void checkOverdraft() {
        if (balance < 0)
            cout << "Account is in overdraft!" << endl;
        else
            cout << "No overdraft." << endl;
    }
};
class FixedDepositAccount : public BankAccount {
    int term;

public:
    FixedDepositAccount(int accNo, string name, double bal, int t)
        : BankAccount(accNo, name, bal), term(t) {}

    void calculateInterest() {
        double interestRate = 7.5;
        double interest = balance * interestRate * term / (12 * 100);
        cout << "Fixed Deposit Interest for " << term << " months: " << interest << endl;
    }
};
main() {
    SavingsAccount sa(101, "Rahul", 5000, 5);
    CheckingAccount ca(102, "Parth", 2000, 1000);
    FixedDepositAccount fda(103, "Dhruvik", 10000, 12);

    cout << "\n--- Savings Account ---\n";
    sa.displayAccountInfo();
    sa.deposit(1000);
    sa.withdraw(2000);
    sa.calculateInterest();

    cout << "\n--- Checking Account ---\n";
    ca.displayAccountInfo();
    ca.withdraw(2500);
    ca.checkOverdraft();

    cout << "\n--- Fixed Deposit Account ---\n";
    fda.displayAccountInfo();
    fda.calculateInterest();
}
