#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Division by zero!" << endl;
                return 0; // ✅ this exits properly on error
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 0; // ✅ this exits on invalid operator
    }

    cout << "Result: " << result << endl;

    // ✅ Wait for user before closing
    cin.ignore();  // clear leftover newline
    cout << "\nPress Enter to exit...";
    cin.get();     // waits for Enter key
    return 0;
}
