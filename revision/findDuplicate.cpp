#include <bits/stdc++.h>

using namespace std;

vector<int> duplicates(long long arr[], int n) {
     
    map<long long, int> mp;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for (auto& it : mp) {
        if (it.second > 1) {
            ans.push_back(it.first);
        }
    }
    if (ans.size()==0) {
        ans.push_back(-1);
    }
     
    return ans;
}

int main() {
    long long a[] = {1, 6, 5, 2, 3, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);
    
    vector<int> duplicates_found = duplicates(a, n);
    
    cout << "Duplicate elements: ";
    for (int element : duplicates_found) {
        cout << element << " ";
    }
    cout << endl;
    
    return 0;
}