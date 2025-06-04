#include <iostream>
using namespace std;
int main()
{
    int money;
    cout<<"How much you have:";
    cin>>money;
    if(money>=2000){
        cout<<"Money I have is:"<<money<<endl;
        cout<<"Lets Have Coffee In Starbucks"<<endl;
    }
    else if(money>1500)
    {
        cout<<"Money i have is:"<<money<<endl;
        cout<<"Lets Have Coffee In CCD"<<endl;
    }
    else if(money>1000)
    {
        cout<<"Money i have is:"<<money<<endl;
        cout<<"Lets Have Coffee In ABC"<<endl;
    }
    else if(money>500)
    {
        cout<<"Money i have is:"<<money<<endl;
        cout<<"Lets Have Coffee In Normal Shop"<<endl;
    }
    else if(money>100)
    {
        cout<<"Money i have is:"<<money<<endl;
        cout<<"Lets Buy Sachets And Make Coffee At Home"<<endl;
    }
    else
    {
        cout<<"Lets Have Tea"<<endl;
    }
    
    cout<<"You can go to home"<<endl;
    return 0;
}