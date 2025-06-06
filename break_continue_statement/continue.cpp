#include<iostream>
using namespace std;
int main() 
{
    // for(int i=1; i <= 10; i++){
    //     cout << "Number: " << i << endl;
    //     if (i == 5) 
    //     {
    //         cout << "Skipping number 5" << endl;
    //         break; // This will exit the loop when i is 5
    //     }
    // }


    int num, total=0;
    while (1)
    {
        cout<< "enter a number :";
        cin >> num;
        if (num < 0)
        {
            break; 
        }
    }
    
    return 0;
    
}