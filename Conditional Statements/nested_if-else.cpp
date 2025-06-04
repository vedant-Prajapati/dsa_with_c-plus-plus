#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Outer if-else to check the relationship between the two numbers
    if (num1 == num2) {
        cout << "Both numbers are equal." << endl;
    } else {
        // Nested if-else to determine which number is greater
        if (num1 > num2) {
            cout << "The first number (" << num1 << ") is greater than the second number (" << num2 << ")." << endl;
        } else {
            cout << "The second number (" << num2 << ") is greater than the first number (" << num1 << ")." << endl;
        }
    }

    return 0;
}