#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;

    void inputStudent() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Performance : public Student {
public:
    float marks;

    void inputMarks() {
        cout << "Enter total marks (out of 100): ";
        cin >> marks;
    }
};

class Graduation : public Performance {
public:
    void displayHonors() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;

        if (marks >= 85)
            cout << "Graduation Honors: Distinction" << endl;
        else if (marks >= 60)
            cout << "Graduation Honors: Merit" << endl;
        else
            cout << "Graduation Honors: Pass" << endl;
    }
};

int main() {
    Graduation g;
    g.inputStudent();
    g.inputMarks();
    g.displayHonors();
    return 0;
}
