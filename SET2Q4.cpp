#include <iostream>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
    float marks;
public:
    void getData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void display() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;}};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student *ptr;
    ptr = new Student[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        (ptr + i)->getData();  }
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        (ptr + i)->display();
    delete[] ptr;
    return 0;
}
}
