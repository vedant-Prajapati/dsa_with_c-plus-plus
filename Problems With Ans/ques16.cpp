// Print the first n factorial numbers
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long factorial = 1; // Use long long to handle larger factorials
    for (int i = 1; i <= n; i++)
    {
        factorial *= i; // Calculate factorial iteratively
        cout << factorial << endl; // Print the current factorial
    }

    return 0;
}