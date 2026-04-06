//KRISH SHARMA (RA2511026010920)
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int marks[n];
    int total = 0;
    cout << "Enter marks:\n";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
        total += marks[i];
    }
    float avg = (float)total / n;
    cout << "\nTotal Marks = " << total;
    cout << "\nAverage Marks = " << avg;
    if (avg >= 80)
        cout << "\nGrade: A";
    else if (avg >= 60)
        cout << "\nGrade: B";
    else if (avg >= 40)
        cout << "\nGrade: C";
    else
        cout << "\nGrade: Fail";
    return 0;
}
