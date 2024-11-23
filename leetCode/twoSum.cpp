#include <bits/stdc++.h>
 
using namespace std;

vector<pair<int, int>> twoSum(vector<int>& nums, int target, int n) { 
    unordered_map<int, int> freq;   
    vector<pair<int, int>> result;
    bool found = false;

     
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];

         
        if (freq[complement] > 0) {
            found = true;
            result.push_back({nums[i], complement});
            freq[complement]--;  
        } else {
            freq[nums[i]]++;   
        }
    }

    if (found) {
        return result;
    } else {
        return {{-1, -1}};
    }
}
int main() {
    vector<int> nums = {1, -1, -1, 2, 2};
    int target = 1;
    int n = nums.size();
    
    vector<pair<int, int>> result = twoSum(nums, target, n);
    
    for (auto& p : result) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
