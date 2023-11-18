//CODSOFT c++ internship ___ TASK 2 (SIMPLE CALCULATOR)
// NAME: SUBHAJIT NAG
//BATCH: NOV BATCH P17



#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    // Get input from the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform the arithmetic calculation based on the user's input
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
    }

    return 0;
}
