//Display this AP - 1,4,7,10,13.. upto 'n' terms. 
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    for (int i = 1; i <= 3*n; i+=3)
    {
        cout << i << " ";
    }
    return 0;
}