// ******
// *    *
// *    *
// ******
// uding If Statement

#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n>>m;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            // Print '*' for the first and last row, and first and last column
            if (i == 1 || i == n || j == 1 || j == m) {
                cout << "*";
            } else {
                cout << " "; // Print space for the inner part
            }
        }
        cout << endl; // Move to the next line after each row
    }
    return 0; // Return 0 to indicate successful execution
}