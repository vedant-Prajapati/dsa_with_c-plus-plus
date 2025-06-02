#include <iostream>
using namespace std;

class MyClass {
public:
    void display() const {
        cout << "Hello, World!" << endl;
    }
};

int main() {
    const int x = 10; // 'const' keyword
    MyClass obj;      // 'class' keyword
    obj.display();    // 'void' and 'const' keywords
    return 0;         // 'return' keyword
}
