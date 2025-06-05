#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;

    int i = 1; // Initialize i to 1 to start summing from 1
    while(i <= n) // Loop until i is less than or equal to n
    {
        sum += i;
        i++;
    }
    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;
}