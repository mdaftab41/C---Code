/*
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.
*/
#include <iostream>
#include <unordered_set>
using namespace std;

 
int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

 
bool isHappy(int n) {
    unordered_set<int> seenNumbers;
    
    while (n != 1 && seenNumbers.find(n) == seenNumbers.end()) {
        seenNumbers.insert(n);
        n = sumOfSquares(n);
    }
    
    return n == 1;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (isHappy(n)) {
        cout << n << " is a happy number!" << endl;
    } else {
        cout << n << " is not a happy number." << endl;
    }
    
    return 0;
}
