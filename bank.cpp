Implement a Program in C++ by defining a class to represent a bank account.

Include the following:

Data Members

Name of the depositor

• Account number

Type of account (Saving, Current etc.)

7.

Balance amount in the account

Member Functions

• To assign initial values

• To deposit an amount

To withdraw an amount after checking the balance

To display name and balance






#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
 
    BankAccount(string name, int accNum, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

   
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn: $" << amount << endl;
        }
    }

    void displayAccountInfo() const {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    string name, accType;
    int accNum;
    double initialBalance, depositAmount, withdrawAmount;

    cout << "Enter depositor's name: ";
    getline(cin, name);

    cout << "Enter account number: ";
    cin >> accNum;

    cout << "Enter account type (Savings/Current): ";
    cin >> accType;

    cout << "Enter initial balance: $";
    cin >> initialBalance;

    BankAccount account(name, accNum, accType, initialBalance);

    account.displayAccountInfo();

    cout << "Enter the amount to deposit: $";
    cin >> depositAmount;
    account.deposit(depositAmount);

    account.displayAccountInfo();

    cout << "Enter the amount to withdraw: $";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    account.displayAccountInfo();

    return 0;
}
