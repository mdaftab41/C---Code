#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        int sum = 0;        // Current sum of the subarray
        int maxlen = 0;     // Maximum length of subarray with sum k

        for (int i = 0; i < arr.size(); i++) {
            sum = 0;        // Reset sum for each new starting point
            for (int j = i; j < arr.size(); j++) { 
                sum += arr[j]; 
                if (sum == k) { 
                    maxlen = max(maxlen, j - i + 1); // Update max length
                }
            }
        }
        return maxlen; // Return the longest subarray length
    }
};

int main() {
    Solution solution;// creating object of class Solution 
    vector<int> arr = {1, 2, 3, 7, 1, 2, 4}; // Example array
    int k = 7;                              // Target sum
    cout << "Length of longest subarray with sum " << k << " is: " 
         << solution.lenOfLongestSubarr(arr, k) << endl;
    return 0;
}
