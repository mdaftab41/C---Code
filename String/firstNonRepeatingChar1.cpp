#include <iostream>
#include <string>
using namespace std;

// Function to find the first non-repeating character in a string.
char nonRepeatingChar(string &s) {
    // Loop through each character of the string
    for (int i = 0; i < s.size(); i++) {
        bool found = false;
        
        // Compare the current character with every other character
        for (int j = 0; j < s.size(); j++) {
            if (i != j && s[i] == s[j]) {
                found = true; // Mark as repeating if found
                break; // No need to check further once a match is found
            }
        }
        
        // If no repeating character is found for s[i], return it as the first non-repeating character
        if (!found) {
            return s[i];
        }
    }
    
    // If no non-repeating character is found, return '$'
    return '$';
}

int main() {
    // Test input string
    string s = "racecar";
    
    // Find the first non-repeating character
    char result = nonRepeatingChar(s);
    
    // Output the result
    if (result != '$') {
        cout << "The first non-repeating character is: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }
    
    return 0;
}
