#include <iostream>
using namespace std;

int setRightmostUnsetBit(int N) {
    // Check if all bits of N are set
    if ((N & (N + 1)) == 0) {
        return N;
    }
    
    // If not, set the rightmost unset bit of N
    int x = N | (N + 1);
    return x;
}

int main() {
    int N = 10;  // Example input
    cout << "Result: " << setRightmostUnsetBit(N) << endl;
    return 0;
}
