#include <bits/stdc++.h>
using namespace std;

char MaxOccChara(string s) {
    unordered_map<char, int> freqMap; // To store frequency of each character

    // Counting the frequency of each character
    for (char ch : s) {
        // Convert to lowercase or uppercase consistently
        ch = tolower(ch);  // This converts all characters to lowercase
        freqMap[ch]++;
    }

    // Finding the character with the maximum occurrence
    int maxFreq = 0;
    char result = '\0'; // Initializing with null character

    for (auto &entry : freqMap) {
        if (entry.second > maxFreq || (entry.second == maxFreq && entry.first < result)) {
            maxFreq = entry.second;
            result = entry.first;
        }
    }

    return result;
}

int main() {
    cout << "Enter the string to count max occurrence:" << endl;
    string s;
    cin >> s;
    cout << "Max occurring character: " << MaxOccChara(s) << endl;

    return 0;
}
