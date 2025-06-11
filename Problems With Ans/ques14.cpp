//  Reverse the digits of a number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10; // Add the last digit to reversed
        n = n / 10;                        // Remove the last digit
    }
    cout << reversed << endl;

    // while(n>0){
    // int lastDigit = n % 10; // Get the last digit
    // reversed = reversed * 10 + lastDigit; //  Add the last digit to reversed
    //     n /= 10; // Remove the last digit
    // }

    return 0;
}
 