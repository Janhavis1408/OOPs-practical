7.#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack {
    T arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if (top == 99) {
            cout << "Stack Overflow\n";
            return;
        }

        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }

        cout << "Popped: " << arr[top--] << endl;
    }

    void display() {
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    cout << "Integer Stack:\n";
    s1.display();

    Stack<float> s2;
    s2.push(10.5);
    s2.push(20.5);
    cout << "Float Stack:\n";
    s2.display();

    Stack<string> s3;
    s3.push("Hello");
    s3.push("World");
    cout << "String Stack:\n";
    s3.display();

    return 0;
}