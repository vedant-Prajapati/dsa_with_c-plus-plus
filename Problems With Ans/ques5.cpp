//WAP to calculate sum of odd integers from 1 to 15 using for loop.

#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    for (int i = 1; i <= 15; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            sum += i; // Add the odd number to the sum
        }
    }
    cout << "Sum of odd integers from 1 to 15 is: " << sum << endl;
    return 0;
} 