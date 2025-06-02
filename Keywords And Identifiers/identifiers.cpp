#include <iostream>
using namespace std;

// Global identifier
const int MAX_SIZE = 100;

// Function with local identifiers
void printNumbers(int n) {
    for (int i = 0; i < n; i++) { // 'i' is local to the loop
        cout << i << " ";
    }
    cout << endl;
}

// Class with member identifiers
class MyClass {
public:
    int value; // 'value' is a member identifier
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    int localVar = 10; // 'localVar' is local to main()
    cout << "Max Size: " << MAX_SIZE << endl;
    printNumbers(5);

    MyClass obj;
    obj.value = 20; // Accessing member identifier
    obj.display();

    return 0;
}