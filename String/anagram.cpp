#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int anagram(const string& s) {
    int n = s.length();

    // Check if the length of the string is odd
    if (n % 2 != 0) {
        return -1; // Return -1 if the length is odd
    }

    // Split the string into two halves
    string s1 = s.substr(0, n / 2);
    string s2 = s.substr(n / 2);

    // Count the frequency of characters in both substrings
    unordered_map<char, int> count1;
    unordered_map<char, int> count2;

    for (char c : s1) {
        count1[c]++;
    }
    for (char c : s2) {
        count2[c]++;
    }

    // Calculate the number of changes required
    int changes = 0;

    for (const auto& pair : count1) {
        char char_s1 = pair.first;
        int freq_s1 = pair.second;
        int freq_s2 = count2[char_s1];

        if (freq_s1 > freq_s2) {
            changes += freq_s1 - freq_s2; // Count excess characters in s1
        }
    }

    return changes; // Return the total changes needed
}

int main() {
    int n;
    cin >> n; // Read the number of test cases

    vector<string> str(n);
    for (int i = 0; i < n; ++i) {
        cin >> str[i]; // Read each string
    }

    for (const string& s : str) {
        cout << anagram(s) << endl; // Print the result for each string
    }

    return 0;
}
 