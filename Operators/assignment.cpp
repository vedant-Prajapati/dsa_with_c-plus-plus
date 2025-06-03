#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    
    // Assignment operator
    a = b; // Assigns the value of b to a
    cout << "After assignment, a = " << a << endl; // Output: 20

    // Compound assignment operators
    a += b; // Equivalent to a = a + b
    cout << "After +=, a = " << a << endl; // Output: 40

    a -= b; // Equivalent to a = a - b
    cout << "After -=, a = " << a << endl; // Output: 20

    a *= b; // Equivalent to a = a * b
    cout << "After *=, a = " << a << endl; // Output: 400

    a /= b; // Equivalent to a = a / b
    cout << "After /=, a = " << a << endl; // Output: 20

    return 0;
}