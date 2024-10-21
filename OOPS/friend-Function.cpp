#include <iostream>
using namespace std;

class Box {
private:
    double length; // Length of a box

public:
    // Constructor
    Box(double l) : length(l) {}

    // Friend function declaration
    friend void displayLength(Box b);
};

// Friend function definition
void displayLength(Box b) {
    // Accessing private member of Box
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box box(5.5); // Create a Box object
    displayLength(box); // Call the friend function
    return 0;
}
