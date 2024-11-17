#include <iostream>
#include <string>
using namespace std;

// Function to print all substrings
void printSubstrings(string str) {
    int n = str.length();

    cout << "All substrings of \"" << str << "\" are:" << endl;

    // Outer loop for starting index
    for (int i = 0; i < n; i++) {
        // Inner loop for ending index
        for (int j = i; j < n; j++) {
            // Print substring from i to j
            for (int k = i; k <= j; k++) {
                cout << str[k];
            }
            cout << endl; // Move to the next line after printing a substring
        }
    }
}

int main() {
    string str = "geek";
    printSubstrings(str);
    return 0;
}
