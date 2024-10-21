#include <iostream>
using namespace std;

class Shape {
public:
    // Declare a virtual function
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    // Override the virtual function
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    // Override the virtual function
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle(); // Base class pointer to derived class object
    Shape* shape2 = new Square();

    shape1->draw(); // Output: Drawing a circle
    shape2->draw(); // Output: Drawing a square

    delete shape1;
    delete shape2;

    return 0;
}
