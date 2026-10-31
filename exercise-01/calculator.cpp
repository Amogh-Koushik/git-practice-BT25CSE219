// Exercise 01 - Simple Calculator
// Reads two numbers and an operator (+ - * /) and prints the result.

#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    if (!cin) {
        cout << "\nInvalid input. Please enter numbers only." << endl;
        return 1;
    }

    switch (op) {
        case '+':
            cout << "\nResult: " << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << "\nResult: " << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << "\nResult: " << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "\nError: division by zero is not allowed." << endl;
                return 1;
            }
            cout << "\nResult: " << a << " / " << b << " = " << a / b << endl;
            break;
        default:
            cout << "\nError: invalid operator '" << op << "'" << endl;
            return 1;
    }

    return 0;
}
