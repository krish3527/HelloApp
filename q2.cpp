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
    float average = (float)total / n;
    cout << "\nTotal Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
    if (average >= 80)
        cout << "Grade: A" << endl;
    else if (average >= 60)
        cout << "Grade: B" << endl;
    else if (average >= 40)
        cout << "Grade: C" << endl;
    else
        cout << "Grade: Fail" << endl;

return 0;
}
