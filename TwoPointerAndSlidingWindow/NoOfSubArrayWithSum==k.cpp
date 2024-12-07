 #include <iostream>
#include <vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int cnt = 0; // Count of subarrays with sum = k
    int sum = 0; // Stores the current sum

    for (int i = 0; i < nums.size(); i++) {
        sum = 0; // Reset sum for each starting point
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j]; // Add the current element
            if (sum == k) {
                cout << "Subarray sum found: " << sum << " (from index " << i << " to " << j << ")" << endl;
                cnt++; // Increment count if sum matches k
            }
        }
    }
    return cnt;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 2}; // Example array
    int k = 6;                          // Target sum

    int result = subarraySum(nums, k); // Call the function
    cout << "Total subarrays with sum " << k << ": " << result << endl;

    return 0;
}
