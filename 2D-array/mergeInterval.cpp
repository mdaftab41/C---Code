 #include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeInterval(vector<vector<int>>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end()); // Sort intervals based on the start time
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        int start = arr[i][0];
        int end = arr[i][1];
        
        // If the last interval in ans fully covers the current one, skip it
        if (!ans.empty() && end <= ans.back()[1]) {
            continue;
        }
        
        // Try to merge overlapping intervals
        for (int j = i + 1; j < n; j++) {
            if (arr[j][0] <= end) {
                end = max(end, arr[j][1]); // Merge the intervals by extending the end
            } else {
                break;
            }
        }
        
        // Push the merged interval to the answer
        ans.push_back({start, end});
    }

    return ans;
}

 vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
    int n = arr.size();
    
    // Sort intervals based on their start times
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans; // To store merged intervals

    for (int i = 0; i < n; i++) {
        // If ans is empty or the current interval does not overlap with the last one
        if (ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]); // No overlap, so add current interval
        } else {
            // Overlapping intervals: merge them by updating the end time
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    
    return ans;
}


int main() {
    vector<vector<int>> v{{1, 3}, {2, 6}, {8, 9}, {9, 11}, {8, 10}, {2, 4}, {15, 18}, {16, 17}};
    
    cout << "Original Intervals:" << endl;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < 2; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    //vector<vector<int>> result = mergeInterval(v);
    vector<vector<int>> result=mergeOverlap(v);
    cout << "Merged Intervals:" << endl;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
