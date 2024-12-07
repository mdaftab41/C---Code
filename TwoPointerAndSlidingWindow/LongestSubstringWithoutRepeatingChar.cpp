#include <iostream>
#include <unordered_set>
#include <string>
#include <climits>
using namespace std;

// Function to find the length of the longest substring without repeating characters
int solve(string str) {
    // If the string is empty, return 0
    if (str.size() == 0)
        return 0;

    int maxans = INT_MIN;           // Variable to store the maximum length of a valid substring
    unordered_set<int> set;         // Set to store characters of the current substring
    int l = 0;                      // Left pointer for the sliding window

    // Outer loop to traverse the string with the right pointer
    for (int r = 0; r < str.length(); r++) {
        // If the current character is already in the set, it means we have a duplicate
        if (set.find(str[r]) != set.end()) {
            // Move the left pointer (l) to the right until the duplicate character is removed
            while (l < r && set.find(str[r]) != set.end()) {
                set.erase(str[l]);  // Remove the character at position `l` from the set
                l++;                // Increment the left pointer
            }
        }

        // Add the current character to the set (no duplicates now)
        set.insert(str[r]);

        // Update the maximum length of the substring
        // The length of the current substring is `r - l + 1`
        maxans = max(maxans, r - l + 1);
    }

    return maxans; // Return the maximum length found
}

// Driver code to test the function
int main() {
    string str = "abcabcbb";
    cout << "Length of the longest substring without repeating characters: " << solve(str) << endl;
    return 0;
}
