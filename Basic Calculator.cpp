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
                system("pause");
                return 0;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            system("pause");
            return 0;
    }

    cout << "Result: " << result << endl;

    system("pause"); // 
    return 0;
}
