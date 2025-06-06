// Enter the number 1
// Enter the number 10
// Enter the number 2
// Enter the number 20
// Enter the number -5
// The sum of the numbers is: 33

#include <iostream>
using namespace std;
int main() {
    int num = 0  , sum = 0;
    do {
        sum += num; 
        cout << "Enter the number: ";
        cin >> num;
    } while (num >= 0);
    cout << "The sum of the numbers is: " << sum << endl;
    return 0;
    }