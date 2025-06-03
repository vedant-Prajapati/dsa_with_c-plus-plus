#include<iostream>
using namespace std;

int main() {
    int a = 4;
    cout << sizeof(a)<< endl; // Output: 4 (size of int in bytes)
    cout << sizeof(int) << endl; // Output: 4 (size of int in bytes)

    char b = 'A';
    cout << sizeof(b) << endl; // Output: 1 (size of char in bytes)

    bool c;
    a == b ? c = true : c = false;
    cout << c << endl; // Output: 1 (size of bool in bytes)

    float d = 3.14;
    cout << int(d) << endl; // Output: 3 (float to int conversion)

    int e = 6;
    cout << e++ << endl; // Output: 6 (post-increment, prints before increment)

    int f = 7;
    cout << ++f << endl; // Output: 8 (pre-increment, prints after increment)

    int g = 10;
    cout << g-- << endl; // Output: 10 (post-decrement, prints before decrement)

    int h = 11;
    cout << --h << endl; // Output: 10 (pre-decrement, prints after decrement)

    return 0;
} 