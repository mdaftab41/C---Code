#include <iostream>
using namespace std;

// Abstract base class demonstrating abstraction
class Vehicle {
public:
    // Pure virtual function making Vehicle an abstract class
    virtual void start() = 0;
    
    virtual void drive() {
        cout << "Driving a generic vehicle" << endl;
    }

    // Virtual destructor for proper cleanup of derived classes
    virtual ~Vehicle() {}
};

// Encapsulation: Car class with private data and public methods
class Car : public Vehicle {
private:
    int speed; // Encapsulated member

public:
    Car() : speed(0) {} // Constructor initializing speed to 0

    // Setter for encapsulation
    void setSpeed(int s) {
        if (s >= 0) {
            speed = s;
        } else {
            cout << "Speed cannot be negative!" << endl;
        }
    }

    // Getter for encapsulation
    int getSpeed() {
        return speed;
    }

    // Overriding the start method from the Vehicle class
    void start() override {
        cout << "Car is starting..." << endl;
    }

    // Overriding the drive method (polymorphism)
    void drive() override {
        cout << "Driving a car at speed " << speed << " km/h" << endl;
    }
};

// Inheritance: ElectricCar inherits from Car
class ElectricCar : public Car {
private:
    int batteryLevel; // Encapsulated member

public:
    ElectricCar() : batteryLevel(100) {} // Initializing battery level to 100%

    // Overriding the start method (polymorphism)
    void start() override {
        cout << "Electric car is starting silently..." << endl;
    }

    // Function to charge the electric car
    void charge() {
        batteryLevel = 100;
        cout << "Battery fully charged!" << endl;
    }

    // Overriding the drive method (polymorphism)
    void drive() override {
        if (batteryLevel > 0) {
            cout << "Driving an electric car at speed " << getSpeed() << " km/h with battery at " << batteryLevel << "%" << endl;
        } else {
            cout << "Battery is empty! Please charge the car." << endl;
        }
    }
};

// Main function demonstrating OOP principles
int main() {
    // Using encapsulation to set and get car properties
    Car myCar;
    myCar.setSpeed(80);
    myCar.start();   // Calls the overridden start method
    myCar.drive();   // Calls the overridden drive method

    cout << endl;

    // Using inheritance and polymorphism
    ElectricCar myElectricCar;
    myElectricCar.setSpeed(100);  // Using inherited method from Car
    myElectricCar.start();        // Calls overridden start method of ElectricCar
    myElectricCar.drive();        // Calls overridden drive method of ElectricCar
    myElectricCar.charge();       // Unique method of ElectricCar

    return 0;
}
