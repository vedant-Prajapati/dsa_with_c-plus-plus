//Take positive integer input and tell if it is a three digit number or not. 
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the number is a three-digit number
    if (number >= 100 && number <= 999) {
        cout << "The number " << number << " is a three-digit number." << endl;
    } else {
        cout << "The number " << number << " is not a three-digit number." << endl;
    }

    return 0;
}