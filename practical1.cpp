
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables and Data Types
    int age;
    float marks;
    double salary;
    char grade;
    string name;

    // Constant
    const float PI = 3.14;

    // Input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "Enter your grade: ";
    cin >> grade;

    // Arithmetic Operators
    int a = 20, b = 10;

    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;

    cout << "\n--- Operators ---" << endl;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;

    cout << "Constant PI: " << PI << endl;

    // Relational Operator
    cout << "Is a greater than b? " << (a > b) << endl;

    return 0;
}
