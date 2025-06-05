// For LOOP
// for(initialization; condition; updation){ work }


#include <iostream>
using namespace std;
int main()
{
    for(int i = 0; i < 10; i++)
    {
        cout<< i << endl;

    }

    for(int i = 0; i > -10; i--)
    {
        cout<< i << endl;
    } 


    // for(int i = 0; i == 10; i++)
    // {
    //     cout<< i << endl;
        
    // }



    // int i = 1,j;
    // for(i = 1,j=0; i < 10; i++)
    // {
    //     cout<< i << j << endl;
    // }



    int i = 1,j;
    for(i = 1,j=0; i < 10, j <3; i++,j++)
    {
        cout<< i << j << endl;
    }
    return 0;
}