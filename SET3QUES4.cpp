//KRISH SHARMA(RA2511026010920)
#include <iostream>
using namespace std;
class Book {
private:
    int id;
    string title;
    float price;
public:
    void getData() {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Price: ";
        cin >> price;
    }
    void display() {
        cout << "\nBook ID: " << id;
        cout << "\nTitle: " << title;
        cout << "\nPrice: " << price << endl;}};
int main() {
    Book *b;
    b = new Book();
    b->getData();
    b->display();
    delete b;
    return 0;
}
