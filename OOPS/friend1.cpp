# include <bits/stdc++.h>
using namespace std ;

class Complex {
    private:
        int real, imag;

    public:
        Complex(int r, int i) : real(r), imag(i) {}

        // Friend function to overload `+`
        friend Complex operator+(Complex c1, Complex c2) {
            return Complex(c1.real + c2.real, c1.imag + c2.imag);
        }

        void Display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2; // Use overloaded `+`
    c3.Display();
    return 0;
}
