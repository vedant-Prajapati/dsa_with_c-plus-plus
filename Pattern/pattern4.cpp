// ******
// *    *
// *    *
// ******
//Using nested loops 

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    // Print the top border
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;

    // Print the middle rows with spaces
    for (int i = 1; i <= n - 2; i++) {
        cout << "*"; // Left border
        for (int j = 1; j <= n - 2; j++) {
            cout << " "; // Spaces in between
        }
        cout << "*"; // Right border
        cout << endl;
    }

    // Print the bottom border
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;

    return 0;
}