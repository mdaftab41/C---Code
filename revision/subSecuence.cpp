#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subSequence(vector<int> arr) {
    // vector<vector<int>> result = {{}};

    // for (int elem : arr) {
    //     int size = result.size();
        
    //     // Add current element to each existing subsequence
    //     for (int i = 0; i < size; i++) {
    //         vector<int> newSubseq = result[i];  // Copy existing subsequence
    //         newSubseq.push_back(elem);          // Append current element
    //         result.push_back(newSubseq);        // Add the new subsequence to the result
    //     }
    // }

    // return result;
    vector<vector<int>> result;

    // Start by adding the first element as its own subsequence
    if (!arr.empty()) {
        result.push_back({arr[0]});
    }

    // Now iterate over remaining elements
    for (int i = 1; i < arr.size(); i++) {
        int size = result.size();
        
        // Add current element to each existing subsequence
        for (int j = 0; j < size; j++) {
            vector<int> newSubseq = result[j];  // Copy existing subsequence
            newSubseq.push_back(arr[i]);        // Append current element
            result.push_back(newSubseq);        // Add the new subsequence to the result
        }

        // Also, add the current element as a single-element subsequence
        result.push_back({arr[i]});
    }

    return result;
}

int main() {
    vector<int> arr {3, 1, 2};

    // Get all subsequences using the iterative approach
    vector<vector<int>> result = subSequence(arr);
    
    // Display all subsequences
    cout << "All Subsequences:\n";
    for (const auto& subseq : result) {
        for (int val : subseq) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
