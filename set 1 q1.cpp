//KRISH SHARMA
//RA2511026010920
#include <iostream>
using namespace std;
class Employee {
private:
    int empId;
    string name;
    float basic, hra, da, gross;
public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
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
        cout << "\nEmployee ID: " << empId;
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basic;
        cout << "\nGross Salary: " << gross << endl;
    }
};
int main() {
    Employee e;
    e.getData();
    e.calculate();
    e.display();
   return 0;
}
