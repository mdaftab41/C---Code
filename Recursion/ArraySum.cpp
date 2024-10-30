#include <iostream>
#include <vector>
using namespace std;

vector<int> Sum(vector<int>& nums, vector<int> ans, int index, int sum) {
    if (index == nums.size()) {
        return ans;
    }
    sum += nums[index];
    ans.push_back(sum);
    return Sum(nums, ans, index + 1, sum);
}

vector<int> runningSum(vector<int>& nums) {
    vector<int> ans;
    if (nums.size() == 0) {
        return {};
    }
    return Sum(nums, ans, 0, 0);
}

int main() {
    vector<int> nums = {1, 2, 3, 4};  // Example input
    vector<int> result = runningSum(nums);
    
    // Print the result
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
