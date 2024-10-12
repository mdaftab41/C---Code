#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string frequencySort(string s) {
    string result;
    int n = s.size();
    unordered_map<char, int> hash;

    // Step 1: Count the frequency of each character
    for (int i = 0; i < n; i++) {
        hash[s[i]]++;
    }

    // Step 2: Store the characters with their frequencies in a vector
    vector<pair<int, char>> freqVec;
    for (auto it : hash) {
        freqVec.push_back({it.second, it.first});  // Store frequency as first and character as second
    }

    // Step 3: Sort the vector by frequency in descending order
    sort(freqVec.rbegin(), freqVec.rend());

    // Step 4: Append characters to the result string based on frequency
    for (auto it : freqVec) {
        int freq = it.first;
        char ch = it.second;
        for (int i = 0; i < freq; i++) {
            result += ch;  // Append the character freq times
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string to sort by character frequency: ";
    cin >> input;

    string sortedString = frequencySort(input);
    cout << "String sorted by frequency: " << sortedString << endl;

    return 0;
}
