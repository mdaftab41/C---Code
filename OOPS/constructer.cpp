#include <iostream>
using namespace std;

class Car {
public:
    string color;
    string model;
    int year;

    // Default constructor
    Car() {
        color = "Unknown";
        model = "Unknown";
        year = 0;
    }

    // Parameterized constructor
    Car(string c, string m, int y) {
        color = c;
        model = m;
        year = y;
    }

    void displayDetails() {
        cout << "Car Model: " << model << ", Color: " << color << ", Year: " << year << endl;
    }
};

int main() {
    Car car1; // Calls default constructor
    Car car2("Red", "Toyota", 2020); // Calls parameterized constructor

    car1.displayDetails(); // Output: Car Model: Unknown, Color: Unknown, Year: 0
    car2.displayDetails(); // Output: Car Model: Toyota, Color: Red, Year: 2020

    return 0;
}
