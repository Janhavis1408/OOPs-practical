
#include <iostream>
#include <cstring>
#include <utility>
using namespace std;

class Student {
private:
    char* name;

public:
    // 1. Default Constructor
    Student() {
        name = new char[8];
        strcpy(name, "Unknown");
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor
    Student(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        cout << "Parameterized Constructor Called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student& s) {
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
        cout << "Copy Constructor Called" << endl;
    }

    // 4. Move Constructor
    Student(Student&& s) noexcept {
        name = s.name;
        s.name = nullptr;
        cout << "Move Constructor Called" << endl;
    }

    // 5. Copy Assignment Operator
    Student& operator=(const Student& s) {
        if (this != &s) {
            char* temp = new char[strlen(s.name) + 1];
            strcpy(temp, s.name);
            delete[] name;
            name = temp;
        }
        cout << "Copy Assignment Called" << endl;
        return *this;
    }

    // 6. Move Assignment Operator
    Student& operator=(Student&& s) noexcept {
        if (this != &s) {
            delete[] name;
            name = s.name;
            s.name = nullptr;
        }
        cout << "Move Assignment Called" << endl;
        return *this;
    }

    // Display Function
    void display() const {
        cout << "Student Name: "
             << (name ? name : "Empty") << endl;
    }

    // 7. Destructor
    ~Student() {
        delete[] name;
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Student s1;
    Student s2("Rahul");
    Student s3(s2);

    Student s4(std::move(s2));

    cout << "\nStudent Details:" << endl;
    s1.display();
    s3.display();
    s4.display();

    Student s5;
    s5 = s3;

    Student s6;
    s6 = std::move(s4);

    cout << "\nAfter Assignment:" << endl;
    s5.display();
    s6.display();

    return 0;
}
