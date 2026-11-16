6.#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Function overloading
    void add(int a, int b) {
        cout << "Integer Sum: " << a + b << endl;
    }

    void add(double a, double b) {
        cout << "Double Sum: " << a + b << endl;
    }

    // Operator overloading
    Complex operator+(Complex c) {
        return Complex(real + c.real,
                       imag + c.imag);
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    Complex c3 = c1 + c2;

    cout << "Complex Number 1: ";
    c1.display();

    cout << "Complex Number 2: ";
    c2.display();

    cout << "Addition: ";
    c3.display();

    c1.add(10, 20);
    c1.add(2.5, 3.5);

    return 0;
}