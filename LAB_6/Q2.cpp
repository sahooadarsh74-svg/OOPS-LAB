#include <iostream>
using namespace std;

class Ledger {
public:
    int accountNo;
    double balance;

    void input() {
        cout << "Enter account number: ";
        cin >> accountNo;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void display() {
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

class SavingsAccount : public Ledger {
public:
    void calculateInterest() {
        cout << "Savings Interest (5%): Rs. "
             << balance * 0.05 << endl;
    }
};

class CheckingAccount : public Ledger {
public:
    void checkMinimumBalance() {
        if (balance >= 1000)
            cout << "Minimum balance maintained." << endl;
        else
            cout << "Minimum balance not maintained." << endl;
    }
};

int main() {
    SavingsAccount s;
    cout << "Savings Account\n";
    s.input();
    s.display();
    s.calculateInterest();

    CheckingAccount c;
    cout << "\nChecking Account\n";
    c.input();
    c.display();
    c.checkMinimumBalance();

    return 0;
}
