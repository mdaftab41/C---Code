 #include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int atMostKDistinct(string &S, int K) {
    unordered_map<char, int> charCount;
    int left = 0, right = 0, count = 0, distinct = 0;

    for (right = 0; right < S.size(); ++right) {
        charCount[S[right]]++;
        if (charCount[S[right]] == 1) { // New distinct character
            distinct++;
        }

        while (distinct > K) {
            charCount[S[left]]--;
            if (charCount[S[left]] == 0) { // No more of this character
                distinct--;
            }
            left++;
        }

        // Every time we reach here, the window [left, right] has at most K distinct characters
        count += right - left + 1;
    }

    return count;
}

int substrCount(string S, int K) {
    return atMostKDistinct(S, K) - atMostKDistinct(S, K - 1);
}

int main() {
    string S;
    int K;
    
    cout << "Enter string S: ";
    cin >> S;
    cout << "Enter integer K: ";
    cin >> K;

    cout << "Number of substrings with exactly " << K << " distinct characters: " << substrCount(S, K) << endl;

    return 0;
}
