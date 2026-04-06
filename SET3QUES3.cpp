//KRISH SHARMA (RA2511026010920)
#include <iostream>
using namespace std;
class BankAccount {
private:
    int accNo;
    string name;
    float balance;
   static int count;
public:
    BankAccount(int a, string n, float b) {
        accNo = a;
        name = n;
        balance = b;
        count++; }
    void display() {
        cout << "\nAccount No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }
    static void showCount() {
        cout << "\nTotal Accounts Created: " << count << endl;
    }};
int BankAccount::count = 0;
int main() {
    BankAccount a1(101, "Ram", 5000);
    BankAccount a2(102, "Ravi", 7000);
    BankAccount a3(103, "Priya", 6000);
    a1.display();
    a2.display();
    a3.display();
    BankAccount::showCount();
    return 0;
}
