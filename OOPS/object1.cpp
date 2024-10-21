#include <iostream>
using namespace std;

// Class definition
class Car {
public:
    // Attributes
    string color;
    string model;
    int year;

    // Method to display car details
    void displayDetails() {
        cout << "Car Model: " << model << ", Color: " << color << ", Year: " << year << endl;
    }
};

int main() {
    // Creating objects of the Car class
    Car car1;
    Car car2;

    // Setting attributes for car1
    car1.color = "Red";
    car1.model = "Toyota";
    car1.year = 2020;

    // Setting attributes for car2
    car2.color = "Blue";
    car2.model = "Honda";
    car2.year = 2021;

    // Calling methods on objects
    car1.displayDetails(); // Output: Car Model: Toyota, Color: Red, Year: 2020
    car2.displayDetails(); // Output: Car Model: Honda, Color: Blue, Year: 2021

    return 0;
}
