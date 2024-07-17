#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> nextPermutation(vector<int>& arr) {
    int N = arr.size();
    int i;
    for (i = N - 2; i >=0; --i) {
        if (arr[i] < arr[i + 1]) break;
    }
    int j;
    if (i >= 0) {
        for (j = N - 1; j > i; --j) {
            if (arr[j] > arr[i]) break;
        }
        swap(arr[i], arr[j]);
    }
    reverse(arr.begin() + i + 1, arr.end());

    return arr;
}

int main() {
    vector<int> arr = {3,2,1};

    vector<int> nextPerm = nextPermutation(arr);

    cout << "Next permutation: ";
    for (int num : nextPerm) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
