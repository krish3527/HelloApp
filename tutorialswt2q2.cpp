//KRISH SHARMA 
//RA2511026010920
#include <iostream>
#include <string>
using namespace std;

class EmailCheck {
private:
    string msg;

public:
    void input() {
        cout << "Enter email message: ";
        getline(cin, msg);
    }

    void check() {
        if (msg.find("WIN") != string::npos ||
            msg.find("FREE") != string::npos ||
            msg.find("URGENT") != string::npos) {
            cout << "This is a Phishing Email" << endl;
        } else {
            cout << "This is a Safe Email" << endl;
        }
    }
};

int main() {
    EmailCheck obj;
    obj.input();
    obj.check();
    return 0;
}
//KRISH SHARMA RA2511026010920