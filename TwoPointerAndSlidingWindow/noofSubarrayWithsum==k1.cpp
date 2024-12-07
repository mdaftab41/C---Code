#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mpp; // Map to store prefix sums and their frequencies
    int cnt = 0;                // Count of subarrays with sum = k
    int prefixSum = 0;          // Tracks the cumulative sum

    mpp[0] = 1; // Base case: a prefix sum of 0 is counted once

    for (int i = 0; i < nums.size(); i++) {
        prefixSum += nums[i];   // Update the prefix sum
        int remove = prefixSum - k; // Calculate the required sum to remove

        if (mpp.find(remove) != mpp.end()) { 
            cnt += mpp[remove]; // Add the frequency of the required sum
        }

        mpp[prefixSum]++; // Increment the frequency of the current prefix sum
    }

    return cnt;
}

int main() {
    vector<int> nums = {1, 2, 3, -3, 4}; // Example array (including negative numbers)
    int k = 3;                           // Target sum

    int result = subarraySum(nums, k); // Call the function
    cout << "Total subarrays with sum " << k << ": " << result << endl;

    return 0;
}
