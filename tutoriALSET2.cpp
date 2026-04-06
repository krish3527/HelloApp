//KRISH SHARMA
//RA2511026010920
#include <iostream>
using namespace std;

class ATM {
private:
    int storedPIN = 1234;

public:
    void authenticate() {
        int pin, attempts = 0;

        while (attempts < 3) {
            cout << "Enter PIN: ";
            cin >> pin;

            if (pin == storedPIN) {
                cout << "Access Granted!" << endl;
                return;
            } else {
                attempts++;
                cout << "Incorrect PIN. Attempts left: "
                     << 3 - attempts << endl;
            }
        }

        cout << "Access Denied!" << endl;
    }
};

int main() {
    ATM obj;
    obj.authenticate();
    return 0;
}
