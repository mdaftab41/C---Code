#include <iostream>
using namespace std;

// Function to check if the Kth bit is set or not.
bool checkKthBit(int n, int k) {
    if ((n >> k) & 1) {    // Checking if the Kth bit is set
        return true;
    } else {
        return false;
    }
}

int main() {
    int n, k;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the bit position (0-based): ";
    cin >> k;

    if (checkKthBit(n, k)) {
        cout << "The " << k << "th bit is set (1)." << endl;
    }
     else {
        cout << "The " << k << "th bit is not set(0)"<<endl ;
        }

    return 0;
  }