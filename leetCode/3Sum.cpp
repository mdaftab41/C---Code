#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;



vector<vector<int>> threeSum(vector<int>& nums) {
     int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end()); // Sort the array to use two-pointer approach
        
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])  // Skip duplicate elements for the first number
                continue;
            
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    
                    // Skip duplicates for the second number
                    while (j < k && nums[j] == nums[j - 1]) j++; // Fixed infinite loop issue
                    // Skip duplicates for the third number
                    while (j < k && nums[k] == nums[k + 1]) k--; // Fixed infinite loop issue
                }
            }
        }
        return ans; 
}





// vector<vector<int>> threeSum(vector<int>& nums) {
//     int n = nums.size();
//     set<vector<int>> st;
//     for (int i = 0; i < n; i++) {
//         set<int> hashset;
//         for (int j = i + 1; j < n; j++) {
//             int third = -(nums[i] + nums[j]);
//             if (hashset.find(third) != hashset.end()) {
//                 vector<int> temp = {nums[i], nums[j], third};
//                 sort(temp.begin(), temp.end());
//                 st.insert(temp);
//             }
//             hashset.insert(nums[j]);
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

int main() {
    // Example input
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    // Calling threeSum function
    vector<vector<int>> result = threeSum(nums);

    // Printing the results
    cout << "Triplets that sum to zero are: " << endl;
    for (const auto& triplet : result) {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
