//Write a program to divide people into 3 age groups depending upon their age. 
#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age entered." << endl;
    } else if (age <= 12) {
        cout << "You are in the Child age group." << endl;
    } else if (age <= 19) {
        cout << "You are in the Teenager age group." << endl;
    } else if (age <= 59) {
        cout << "You are in the Adult age group." << endl;
    } else {
        cout << "You are in the Senior Citizen age group." << endl;
    }

    return 0;
}