#include <bits/stdc++.h>
// #include <vector>
// #include <string>
// #include <cctype> // For std::tolower

using namespace std;

string pangrams(const string& s) {
    vector<int> hash(26, 0); // Vector to keep track of letter frequencies
    string str = s; // Create a mutable copy of the original string
    int n = str.size();

    // Convert the string to lowercase
    for (int i = 0; i < n; ++i) {
        str[i] = tolower(str[i]); // Modify the copy
    }

    // Count occurrences of each letter
    for (int i = 0; i < n; i++) {
        if (isalpha(str[i])) { // Check if the character is alphabetic
            hash[str[i] - 'a']++;
        }
    }

    // Check if all letters are present
    for (int i = 0; i < 26; i++) {
        if (hash[i] == 0) {
            return "not pangram"; // Return if any letter is missing
        }
    }

    return "pangram"; // Return if all letters are present
}

int main() {
    string input;

    // Read the input string
    cout << "Enter a sentence: ";
    getline(cin, input);

    // Call the pangrams function and print the result
    cout << pangrams(input) << endl;

    return 0;
}
 