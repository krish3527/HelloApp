#include <iostream>
using namespace std;
class Book {
private:
    int bookID;
    string title;
    float price;
public:
    void setData(int id, string t, float p) {
        bookID = id;
        title = t;
        price = p;
    }
    void display() {
        cout << "\nBook ID: " << bookID << endl;
        cout << "Book Title: " << title << endl;
        cout << "Price: " << price << endl;}};
int main() {
    Book *b;
  b = new Book();
    b->setData(101, "C++ Programming", 450.75);
    b->display();
    delete b;
    return 0;
}
