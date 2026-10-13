#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;

    void input() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author name: ";
        getline(cin, author);
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

class EBook : public Book {
public:
    double fileSize;

    void inputEBook() {
        input();
        cout << "Enter file size (MB): ";
        cin >> fileSize;
    }

    void displayEBook() {
        display();
        cout << "File Size: " << fileSize << " MB" << endl;
    }
};

int main() {
    EBook e;
    e.inputEBook();
    e.displayEBook();
    return 0;
}
