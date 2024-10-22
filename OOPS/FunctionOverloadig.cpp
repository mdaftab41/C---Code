 #include <iostream>
using namespace std;

class Base {
public:
    // Virtual function that can be overridden
    virtual void show() {
        cout << "Base class show() function" << endl;
    }
};

class Derived : public Base {
public:
    // Overriding the show function in the derived class
    void show() override {
        cout << "Derived class show() function" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;
    basePtr->show();  // Calls Derived class's show() due to overriding

    return 0;
}
