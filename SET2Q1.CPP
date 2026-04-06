//KRISH SHARMA (920)
#include <iostream>
using namespace std;
class BankAccount {
private:
    int accNo;
    string name;
    float balance;
public:
    void createAccount() {
        cout<<"Enter Account Number: ";
        cin>>accNo;
        cout<<"Enter Account Holder Name: ";
        cin>>name;
        cout<<"Enter Initial Balance: ";
        cin>>balance;}
    void deposit() {
        float amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        balance+=amount;
        cout<<"Amount deposited successfully!\n";}
    void withdraw() {
        float amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        if(amount<=balance){
            balance-=amount;
            cout<<"Withdrawal successful!\n";
        } else {
            cout<<"Insufficient balance!\n";}}
    void displayBalance() {
        cout<<"Current Balance: "<<balance<<endl;}};
int main() {
    BankAccount b;
    int choice;
    b.createAccount();
    do {
        cout<<"\n--- MENU ---\n";
        cout<<"1. Deposit\n2. Withdraw\n3. Balance Enquiry\n4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1: b.deposit(); break;
            case 2: b.withdraw(); break;
            case 3: b.displayBalance(); break;
            case 4: cout<<"Exiting program...\n"; break;
            default: cout<<"Invalid choice!\n";
        }
    } while(choice!=4);
    return 0;
}
