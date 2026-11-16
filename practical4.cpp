
#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
public:
    string name;
    int age;

    void getPersonDetails() {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class (Single Inheritance)
class Student : public Person {
public:
    int rollNo;
    string course;

    void getStudentDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Course: ";
        getline(cin, course);
    }

    void displayStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

// Derived Class (Multilevel Inheritance)
class GraduateStudent : public Student {
public:
    string researchTopic;

    void getGraduateDetails() {
        cout << "Enter Research Topic: ";
        getline(cin, researchTopic);
    }

    void displayGraduate() {
        displayStudent();
        cout << "Research Topic: " << researchTopic << endl;
    }
};

int main() {
    GraduateStudent g;

    cout << "--- University Student Details ---" << endl;

    g.getPersonDetails();
    g.getStudentDetails();
    g.getGraduateDetails();

    cout << "\n--- Student Information ---" << endl;

    g.displayGraduate();

    return 0;
}
