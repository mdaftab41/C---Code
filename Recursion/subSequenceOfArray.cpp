 #include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subSequence(vector<int> arr, int ind, vector<int> ans, int n) {
    if (ind == n) {
        //cout << "Subsequence: ";
        // for (auto i : ans) {
        //     cout << i << " ";
        // }
        // cout << endl;
        return {ans};  // Return the current subsequence as a vector of vectors
    }
    
    // Store results from both recursive calls
    vector<vector<int>> result;
    
    // Include the current element in the subsequence
    ans.push_back(arr[ind]);
    vector<vector<int>> include = subSequence(arr, ind + 1, ans, n);
    result.insert(result.end(), include.begin(), include.end()); // Append all results
    
    // Exclude the current element from the subsequence
    ans.pop_back();
    vector<vector<int>> exclude = subSequence(arr, ind + 1, ans, n);
    result.insert(result.end(), exclude.begin(), exclude.end()); // Append all results
    
    return result;  // Ensure result is returned in all paths
}

int main() {
    vector<int> arr {3, 1, 2};
    vector<int> ans;
    int n = arr.size();
    
    vector<vector<int>> result = subSequence(arr, 0, ans, n);
    
    cout << "\nAll Subsequences:\n";
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
