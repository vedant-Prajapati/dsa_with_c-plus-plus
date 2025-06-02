#include<iostream>
using namespace std;
int main()
{
    unsigned short ushort_int=56; 
    signed short signed_short = -6; 
    int a=99916543; 
    long int long_int=456789; 
    long long int ll_int=9991654321; 
    int8_t int8_variable=2; 

cout<<"size of short int "<<sizeof(short int)<<endl; 
cout<<"size of int "<<sizeof(int)<<endl; 
cout<<"size of long "<<sizeof(long)<<endl; 
cout<<"size of long long: "<<sizeof(long long)<<endl; 

// cout<<"signed long long int: "<<a<<endl; 
cout<<"unsigned short int:"<<ushort_int<<endl; 
cout<<"signed short int value: "<<signed_short<<endl; 
cout<<"long int:"<<long_int<<endl; 
cout<<"ling long int value: "<<ll_int<<endl;  
cout<<"a:"<<a<<endl; 
   
    return 0;
}