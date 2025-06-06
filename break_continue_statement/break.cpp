#include<iostream>
using namespace std;
int main() {
    
    for(int i = 1; i <= 10; i++) {
        if (i == 7) {
            cout << "Skipping number 5" << endl;
            continue; // This will exit the loop when i is 7
        }
        cout << "Number: " << i << endl;
    }
    return 0;
}