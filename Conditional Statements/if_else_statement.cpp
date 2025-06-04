#include <iostream>
using namespace std;
int main()
{
    int money;
    cout<<"How much you have:";
    cin>>money;
    if(money>=2000){
        cout<<"Money I have is:"<<money<<endl;
        cout<<"You can go to the mall"<<endl;
    }
    else
    {
        cout<<"Money i have is:"<<money<<endl;
        cout<<"You can't go to the mall"<<endl;
        cout<<"You can go to home"<<endl;
    }

    return 0;
}