#include <iostream>
#include <vector>

using namespace std;

class Account {
private:
    int id;
    string name;
    float balance;
    static int accountNumber;

public:
    Account(float bank_balance, string holder) {
        accountNumber++;
        id = accountNumber;
        balance = bank_balance;
        name = holder;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! New balance: $" << balance << endl;
        } else {
            cout << "Error: Invalid deposit amount!" << endl;
        }
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New balance: $" << balance << endl;
            return true;
        } else {
            cout << "Error: Insufficient balance or invalid amount!" << endl;
            return false;
        }
    }

    void display()  {
        cout << "\n";
        cout << "Account Holder Name: " << name << endl;
        cout << "Account ID: " << id << endl;
        cout << "Account Balance: $" << balance << endl;
    }

    int getID()
 { return id;
 }
    static int getTotalAccounts()
    { return accountNumber; }
};

int Account::accountNumber = 0;

int main() {
    int n;
    string name;
    float balance;
    vector<Account> accounts;

    cout << "Enter total number of accounts: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter account holder name: ";
        getline(cin, name);
        cout << "Enter account balance: ";
        cin >> balance;
        accounts.push_back(Account(balance, name));
    }

    while (true) {
        cout << "\n1. Deposit Money\n2. Withdraw Money\n3. Display Accounts\n4. Exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            int accID;
            double amount;
            cout << "Enter Account ID: ";
            cin >> accID;
            cout << "Enter Deposit Amount: ";
            cin >> amount;

            bool found = false;
            for (auto &acc : accounts) {
                if (acc.getID() == accID) {
                    acc.deposit(amount);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Error: Account not found!\n";
        } else if (choice == 2) {
            int accID;
            double amount;
            cout << "Enter Account ID: ";
            cin >> accID;
            cout << "Enter Withdrawal Amount: ";
            cin >> amount;

            bool found = false;
            for (auto &acc : accounts) {
                if (acc.getID() == accID) {
                    acc.withdraw(amount);
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Error: Account not found!\n";
        } else if (choice == 3) {
            cout << "\n--- Account Details ---\n";
            for ( auto &acc : accounts)
             acc.display();
            cout << "Total Accounts: " << Account::getTotalAccounts() << endl;
        } else if (choice == 4) {
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Invalid choice! Try again.\n";
        }
    }
    cout<<"24ce031";
    return 0;
}
