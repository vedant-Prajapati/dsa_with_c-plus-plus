#include<iostream>
using namespace std;

int main() {
    int x = 5, y = 8;

    cout << (x << 1) <<endl; // Left shift: 5 becomes 10 (binary 1010)
    cout << (x >> 1) <<endl; // Right shift: 8 becomes 4 (binary 100)

    cout << (x & y) <<endl;  // Bitwise AND: 5 & 8 = 0 (binary 0000)
    cout << (x | y) <<endl;  // Bitwise OR: 5 | 8 = 13 (binary 1101)

    int a = 5, b = 3;

    // Bitwise AND
    cout << "a & b = " << (a & b) << endl; // Output: 1 (0101 & 0011 = 0001)

    // Bitwise OR
    cout << "a | b = " << (a | b) << endl; // Output: 7 (0101 | 0011 = 0111)

    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << endl; // Output: 6 (0101 ^ 0011 = 0110)

    // Bitwise NOT
    cout << "~a = " << (~a) << endl; // Output: -6 (~0101 = 1010 in two's complement)

    // Left shift
    cout << "a << 1 = " << (a << 1) << endl; // Output: 10 (0101 becomes 1010)

    // Right shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Output: 2 (0101 becomes 0010)
    

    return 0;
}