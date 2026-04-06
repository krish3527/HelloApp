//KRISH SHARMA RA2511026010920
#include <iostream>
using namespace std;
class Password {
    string pwd;
public:
    void input() {
        cin >> pwd;
    }
    void check() {
        bool digit = false, special = false;

        if (pwd.length() < 8) {
            cout << "Weak";
            return;
        }

        for (char c : pwd) {
            if (c >= '0' && c <= '9') digit = true;
            else if (!isalnum(c)) special = true;
        }

        if (digit && special)
            cout << "Strong";
        else
          cout << "Weak";
    }
};
int main() {
    Password p;
    p.input();
    p.check();
}
