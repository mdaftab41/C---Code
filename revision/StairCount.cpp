#include <bits/stdc++.h>
using namespace std;

// Function to count the number of ways to climb stairs
int countWays(int n) {
    // Base cases
    if (n < 0) return 0;  // No way to climb if steps are negative
    if (n == 0) return 1; // One way to stay at base

    // Recursive relation
    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    int ways = countWays(n);
    cout << "Number of ways to climb " << n << " steps: " << ways << endl;

    return 0;
}
