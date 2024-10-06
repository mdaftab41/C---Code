#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subSequence(vector<int> arr) {
    vector<vector<int>> result = {{}};

    for (int elem : arr) {
        int size = result.size();
        
        // Add current element to each existing subsequence
        for (int i = 0; i < size; i++) {
            vector<int> newSubseq = result[i];  // Copy existing subsequence
            newSubseq.push_back(elem);          // Append current element
            result.push_back(newSubseq);        // Add the new subsequence to the result
        }
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
