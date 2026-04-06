//RA2511026010920 KRISH SHARMA
#include <iostream>
using namespace std;
class ATM {
private:
    float balance;
public:
    void init() {
        balance = 0;
    }
    void deposit() {
        float amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;
        balance += amt;
        cout << "Amount deposited!\n";
    }
    void withdraw() {
        float amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;
        if (amt <= balance) {
            balance -= amt;
            cout << "Withdrawal successful!\n";
        } else {
            cout << "Insufficient balance!\n";}}
    void showBalance() {
        cout << "Current Balance: " << balance << endl;}};
int main() {
    ATM a;
    int choice;
    a.init();
    do {
        cout << "\n--- ATM MENU ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance Enquiry\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                a.deposit();
                break;
            case 2:
                a.withdraw();
                break;
            case 3:
                a.showBalance();
                break;
            case 4:
                cout << "Thank you!\n";
                break;
            default:
                cout << "Invalid choice!\n";}}
                while (choice != 4);
    return 0;
}
