#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int calculateFrequency(const string &s, int k) {
    unordered_map<string, int> substringCount;
    int n = s.size();
    
    // Traverse the string and count all substrings of length k
    for (int i = 0; i <= n - k; i++) {
        string sub = s.substr(i, k);
        substringCount[sub]++;
    }
    
    // Calculate total frequency of unique substrings of length k
    int uniqueFrequency = 0;
    for (auto &entry : substringCount) {
        uniqueFrequency += entry.second; // You can modify this based on requirement
    }

    return uniqueFrequency;
}

int main() {
    string s;
    int k;
    
    cout << "Enter string: ";
    cin >> s;
    cout << "Enter length k: ";
    cin >> k;
    
    int result = calculateFrequency(s, k);
    cout << "Output: " << result << endl;

    return 0;
}
