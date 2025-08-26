#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        cout << "Error! Division by zero is not allowed.\n";
        return 0;
    }
    return a / b;
}
int mod(int a, int b) {
    if (b == 0) {
        cout << "Error! Modulus by zero is not allowed.\n";
        return 0;
    }
    return a % b;
}

int main() {
    int choice, num1, num2;

    do {
        cout << "--- Calculator Menu ---\n";
        cout << "Press 1 for + \n";
        cout << "Press 2 for - \n";
        cout << "Press 3 for * \n";
        cout << "Press 4 for / \n";
        cout << "Press 5 for % \n";
        cout << "Press 0 for Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting program...\n";
            break;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << "Addition of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Subtraction of " << num1 << " and " << num2 << " is " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Multiplication of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Division of " << num1 << " and " << num2 << " is " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Modulus of " << num1 << " and " << num2 << " is " << mod(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 0);
}
