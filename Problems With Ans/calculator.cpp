// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// Q. Quit
// Enter your choice:

#include <iostream>
using namespace std;
int main(){
    int choice;
    double num1, num2, result;

    do {
        cout << "\n**********************************\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "Q. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    result = num1 + num2;
                    cout << "Result: " << result << endl;
                    break;
                case 2:
                    result = num1 - num2;
                    cout << "Result: " << result << endl;
                    break;
                case 3:
                    result = num1 * num2;
                    cout << "Result: " << result << endl;
                    break;
                case 4:
                    if (num2 != 0) {
                        result = num1 / num2;
                        cout << "Result: " << result << endl;
                    } else {
                        cout << "Error: Division by zero!" << endl;
                    }
                    break;
            }
        } else if (choice != 'Q' && choice != 'q') {
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 'Q' && choice != 'q');
    return 0;
}