#include<iostream>
#include<string>
using namespace std;
int main()
{
    const double PI = 3.14159; // Define a constant for Pi
    const int MAX_SIZE = 100;  // Define a constant for maximum size

    cout << "The value of PI is: " << PI << endl;
    cout << "The maximum size is: " << MAX_SIZE << endl;
    // PI = 3.14; // This would cause a compilation error because PI is a constant

    const int a = 50;
    cout<<a<<endl;
    // a = 55;
    // cout<<a<<endl;

    const string str = "Mr Vedant";
    cout<<str<<endl;
    return 0;
}