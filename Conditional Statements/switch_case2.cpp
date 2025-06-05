#include <iostream>
using namespace std;
int main()
{
    // int ch;
    // cout << "Enter a choice:";
    // cin >> ch;

    // switch (ch)
    // {

    // case 1:
    //     cout << "I wanna know my balance" ;
    //     break;
    // case 2:
    //     cout << "I wanna register a complaint." ;
    //     break;
    // case 9:
    //     cout << "I wanna talk to customer care executive." ;
    //     break;
    // default:
    //     cout << "Enter a valid choice" ;
    //     break;
    // }
    // cout << "\n out of program.";


    char ch;
    cout << "Enter a choice:";
    cin >> ch;

    switch (ch)
    {

    case 'A':
        cout << "I wanna know my balance" ;
        break;
    case 'a':
        cout << "I wanna register a complaint." ;
        break;
    case 'h':
        cout << "I wanna talk to customer care executive." ;
        break;
    default:
        cout << "Enter a valid choice" ;
        break;
    }
    cout << "\n out of program.";
    return 0;
}