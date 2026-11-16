
#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual double area() = 0;

    virtual void display() = 0;

    virtual ~Shape() {}
};

// Derived Class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() override {
        return 3.14 * radius * radius;
    }

    void display() override {
        cout << "Circle Area: " << area() << endl;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape {
private:
    double length, breadth;

public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double area() override {
        return length * breadth;
    }

    void display() override {
        cout << "Rectangle Area: " << area() << endl;
    }
};

// Derived Class: Triangle
class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double area() override {
        return 0.5 * base * height;
    }

    void display() override {
        cout << "Triangle Area: " << area() << endl;
    }
};

int main() {
    // Creating Objects
    Circle c(5);
    Rectangle r(10, 5);
    Triangle t(8, 6);

    // Base Class Pointers
    Shape* ptr;

    ptr = &c;
    ptr->display();

    ptr = &r;
    ptr->display();

    ptr = &t;
    ptr->display();

    return 0;
}
