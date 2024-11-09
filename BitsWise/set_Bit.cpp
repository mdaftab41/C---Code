#include <iostream>
using namespace std;

void bitManipulation(int num, int i) {
    int ith_bit = (num >> (i - 1)) & 1;            // Get the ith bit (1-based indexing)
    int Set_ith_bit = num | (1 << (i - 1));        // Set the ith bit (1-based indexing)
    int clear_ith_bit = num & ~(1 << (i - 1));     // Clear the ith bit (1-based indexing)

    cout << ith_bit << " " << Set_ith_bit << " " << clear_ith_bit;
}

int main() {
    int num, i;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the bit position (1-based): ";
    cin >> i;

    bitManipulation(num, i);

    return 0;
}
