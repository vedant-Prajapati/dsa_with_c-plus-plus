//Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. 
#include <iostream>
using namespace std;
int main() {
    float length, breadth, area, perimeter;

    // Input length and breadth of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Compare area and perimeter
    if (area > perimeter) {
        cout << "The area of the rectangle (" << area << ") is greater than its perimeter (" << perimeter << ")." << endl;
    } else if (area < perimeter) {
        cout << "The area of the rectangle (" << area << ") is less than its perimeter (" << perimeter << ")." << endl;
    } else {
        cout << "The area of the rectangle is equal to its perimeter." << endl;
    }

    return 0;
}