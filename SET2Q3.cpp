#include <iostream>
using namespace std;
class Demo {
private:
    int nonStaticVar;
    static int staticVar;

public:
    Demo(int n) {
        nonStaticVar = n;
        staticVar++;
    }
    void display() {
        cout << "\nNon-Static Value: " << nonStaticVar;
        cout << "\nStatic Value: " << staticVar << endl;}};
int Demo::staticVar = 0;
int main() {
    Demo d1(10);
    Demo d2(20);
    Demo d3(30);
    cout << "\nObject d1:";
    d1.display();
    cout << "\nObject d2:";
    d2.display();
    cout << "\nObject d3:";
    d3.display();
    return 0;
}
