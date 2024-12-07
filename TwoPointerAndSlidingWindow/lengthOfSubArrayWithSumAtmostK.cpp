#include <iostream>
#include <vector>
#include <map>
using namespace std;

int lenOfLongestSubarr(vector<int>& arr, int k) {
    map<int, int> prefix; // Stores prefix sum and its first occurrence index
    int sum = 0;         // Tracks the cumulative sum
    int maxlen = 0;      // Tracks the maximum length of subarray with sum = k

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];   // Update the cumulative sum

        if (sum == k) {  // If the current sum equals k, update maxlen
            maxlen = max(maxlen, i + 1);
        }

        int remain = sum - k; // Check if there's a prefix sum to subtract to get k
        if (prefix.find(remain) != prefix.end()) {
            maxlen = max(maxlen, i - prefix[remain]); // Update maxlen if valid
        }

        // Store the prefix sum if it's not already in the map
        if (prefix.find(sum) == prefix.end()) {
            prefix[sum] = i;
        }
    }

    return maxlen;
}

int main() {
    vector<int> arr = {2, 3, 1, -1, 4}; // Example array
    int k = 5;                          // Target sum

    int result = lenOfLongestSubarr(arr, k); // Call the function
    cout << "Length of the longest subarray with sum " << k << " is: " << result << endl;

    return 0;
}
