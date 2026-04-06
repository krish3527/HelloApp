#include <iostream>
using namespace std;
class Account {
private:
    int accNo;
    string name;
    float balance;
    static int totalAccounts;

public:
    Account(int a, string n, float b) {
        accNo = a;
        name = n;
        balance = b;
        totalAccounts++;}
    void display() {
        cout << "\nAccount Number: " << accNo << endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
    static void showTotalAccounts() {
      cout << "\nTotal Accounts Created: " << totalAccounts << endl;}};
int Account::totalAccounts = 0;
int main() {
    Account a1(101, "Krishna", 5000);
    Account a2(102, "Ravi", 7000);
    a1.display();
    a2.display();
    Account::showTotalAccounts();
    return 0;
}
