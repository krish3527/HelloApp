//KRISH SHARMA (RA2511026010920)
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
        cout << "\nMarks: " << marks << endl;
    }
    float getMarks() {
        return marks;}};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n];
    float total = 0, avg;
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        s[i].getData();
        total += s[i].getMarks();
    }
    avg = total / n;
    cout << "\nClass Average = " << avg << endl;
    cout << "\nStudents scoring above average:\n";
    for (int i = 0; i < n; i++) {
        if (s[i].getMarks() > avg) {
            s[i].display();
        }
    }
    return 0;
}
