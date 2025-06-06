#include<iostream>
using namespace std;
int main() 
{
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(auto i : data)
    {
        if (i == 5) 
        {
            break;
        }   
        else if(i == 3)
        {
            continue; 
        }
        cout << "Number: " << i << endl;
    }
    return 0;
}