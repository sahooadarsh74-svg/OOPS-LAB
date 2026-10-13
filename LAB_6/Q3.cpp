#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Teacher : virtual public Person {
public:
    string subject;

    void inputTeacher() {
        cout << "Enter teaching subject: ";
        cin >> subject;
    }
};

class Student : virtual public Person {
public:
    int rollNo;

    void inputStudent() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    void display() {
        displayPerson();
        cout << "Teaching Subject: " << subject << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    TeachingAssistant ta;

    ta.inputPerson();
    ta.inputTeacher();
    ta.inputStudent();

    cout << "\nTeaching Assistant Details\n";
    ta.display();

    return 0;
}
