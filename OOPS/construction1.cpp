#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;  // Changed to string for full names
    int rollNo;

    // Parameterized constructor
    Student(int num) {
        rollNo = num;
    }

    // Default constructor
    Student() {
        rollNo = 0;
        name = "";
    }

    // Member function to print student details
    void print() {
        cout << name << " " << rollNo << endl;
    }
};

int main() {
    // Create an object using the default constructor
    Student s;
    s.name = "Aftab";  // Assigning a name
    s.rollNo = 15;     // Assigning roll number
    s.print();         // Printing the student details

    return 0;
}
