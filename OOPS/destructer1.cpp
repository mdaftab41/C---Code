#include <iostream>
using namespace std;

class Car {
public:
    string color;
    string model;
    int year;

    // Parameterized constructor
    Car(string c, string m, int y) {
        color = c;
        model = m;
        year = y;
        cout << "Car created: " << model << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car destroyed: " << model << endl;
    }

    void displayDetails() {
        cout << "Car Model: " << model << ", Color: " << color << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("Red", "Toyota", 2020); // Constructor is called
    car1.displayDetails();
    // Destructor is called automatically when car1 goes out of scope
    return 0;
}
