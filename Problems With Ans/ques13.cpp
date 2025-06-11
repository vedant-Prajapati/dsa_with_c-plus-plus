// Find the sum of digits in a given number n.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;
    while (n > 0)
    {
        sum += n % 10; // Add the last digit to sum
        n = n / 10;    // Remove the last digit
    }
    cout << sum << endl;

    return 0;
}   