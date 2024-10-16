 #include <bits/stdc++.h>
using namespace std;

void findCombination(int ind, int target, vector<int> arr, vector<vector<int>>& ans, vector<int> result) {
    if (ind == arr.size()) {
        if (target == 0) {
            ans.push_back(result);
        }
        return;
    }
    // pick up the element
    if (arr[ind] <= target) {
        result.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, result);
        result.pop_back();
    }
    findCombination(ind + 1, target, arr, ans, result);
}

vector<vector<int>> combinationSum(vector<int> candidate, int target) {
    vector<vector<int>> ans;
    vector<int> result;
    findCombination(0, target, candidate, ans, result);
    return ans;
}

int main() {
    int n, m;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> m;

    vector<vector<int>> ans = combinationSum(arr, m);

    cout << "Combinations that sum to " << m << " are:\n";
    for (auto combination : ans) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
