#include <iostream>
using namespace std;

// Abstract class using pure virtual function
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
    virtual double area() = 0;
};

// Derived class
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
    double area() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Shape shape;  // Error: Cannot instantiate an abstract class
    Circle circle(5.0);
    circle.draw();  // Output: Drawing a Circle
    cout << "Area: " << circle.area() << endl;  // Output: Area: 78.5

    return 0;
}
  