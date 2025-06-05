#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    while(i <= 10)
    {
        cout << i << endl;
        i++;
    }

    // Example of an infinite loop
    // Uncomment the following lines to see the infinite loop in action
    // while(true)
    // {
    //     cout << "This will run forever!" << endl;
    // }

    int j;
    cout << "enter number between 2 to 7:";
    cin >> j;
    while(j <= 2 || j >= 7)
    {
        cout << "Invalid input. Please enter a number between 2 and 7: ";
        cin >> j;
    }

    return 0;
}