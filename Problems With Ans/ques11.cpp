// Print the factorial of first 'n' numbers 

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int product = 1;

    for (int i = 1; i <= n; i++) {
        product *= i;
        cout << "Factorial of " << i << " is: " << product << endl;
    }
    return 0;
}