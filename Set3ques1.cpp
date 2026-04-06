#include <iostream>
using namespace std;
class Employee {
private:
    int id;
    string name;
    float basic, hra, da, gross;
public:
    void getData() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }
    void calculate() {
        hra = 0.2 * basic;
        da = 0.1 * basic;
        gross = basic + hra + da;
    }
    void display() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basic;
        cout << "\nHRA: " << hra;
        cout << "\nDA: " << da;
        cout << "\nGross Salary: " << gross << endl;}};
int main() {
    Employee e1, e2;
    cout << "\nEnter details for Employee 1:\n";
    e1.getData();
    e1.calculate();
    cout << "\nEnter details for Employee 2:\n";
    e2.getData();
    e2.calculate();
    cout << "\n--- Employee Details ---\n";
    e1.display();
    e2.display();

    return 0;
}
