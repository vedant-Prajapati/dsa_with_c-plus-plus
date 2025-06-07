//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    // for (int i = 0; i <= n; i++)
    // {
    //     if (i != 3 && i != 8 && i != 14)
    //    cout << i << " ";
        
    // }

    
    for (int i = 1; i <= n; i++)
    {
        if (i ==3 || i == 8 || i == 14)
        continue; 
        cout << i << " ";
    }

    return 0;
}