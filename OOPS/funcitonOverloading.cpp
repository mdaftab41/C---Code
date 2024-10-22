#include <iostream>
using namespace std;

class Example {
public:
    // Overloading a function
    void display(int a) {
        cout << "Integer: " << a << endl;
    }

    void display(double b) {
        cout << "Double: " << b << endl;
    }

    void display(string c) {
        cout << "String: " << c << endl;
    }
};

int main() {
    Example obj;
    obj.display(5);          // Calls the function with integer argument
    obj.display(3.14);       // Calls the function with double argument
    obj.display("Hello!");   // Calls the function with string argument
    return 0;
}
