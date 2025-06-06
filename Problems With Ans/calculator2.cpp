// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// Q. Quit
// Enter your choice:

#include <iostream>
using namespace std;
int main()
{
    char choice;

    do
    {
        int a, b, sum = 0, sub =0, mul = 0, div = 0;
        cout << "\n**********************************\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "Q. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '1')
        {
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            sum = a + b;
            cout << "Result: " << sum << endl;
        }
        else if (choice == '2')
        {
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            sum = a - b;
            cout << "Result: " << sum << endl;
        }
        else if (choice == '3')
        {
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            sum = a * b;
            cout << "Result: " << sum << endl;
        }
        else if (choice == '4')
        {
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;
            if (b != 0)
                sum = a / b;
            else
                cout << "Error: Division by zero!" << endl;
            continue; // Skip the output for division by zero
        }
        else if (choice == 'Q' || choice == 'q')
        {
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 'Q' && choice != 'q');

    return 0;
}