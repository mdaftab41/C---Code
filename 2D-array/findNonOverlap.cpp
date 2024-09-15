#include <bits/stdc++.h>
using namespace std;

 

 vector<vector<int>> findNonOverlap(vector<vector<int>>& arr) {
    int n = arr.size();
    
    // Sort intervals based on their start times
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans; 

    for (int i = 0; i < n-1; i++) {
        if(arr[i][1]<arr[i+1][0]){
            ans.push_back({arr[i][1] ,arr[i+1][0]}) ;
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
    vector<vector<int>> result=findNonOverlap(v);
    cout << "findNonOverlap Intervals :" << endl;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
