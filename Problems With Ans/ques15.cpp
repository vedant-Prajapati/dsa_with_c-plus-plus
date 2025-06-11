// Find the sum of the following seres: S = 1 - 2 + 3 - 4 ... n
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) // If i is even
        {
            sum -= i; // Subtract even numbers
        }
        else // If i is odd
        {
            sum += i; // Add odd numbers
        }
    }
    cout << sum << endl;

    return 0;
}