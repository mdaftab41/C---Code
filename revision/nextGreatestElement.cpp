 #include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1); // Initialize result array with -1
    stack<int> st;             // Stack to store elements

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        // Pop elements that are less than or equal to the current element
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        // If stack is not empty, the top is the next greater element
        if (!st.empty()) {
            result[i] = st.top();
        }

        // Push current element onto stack
        st.push(arr[i]);
    }

    return result;
}

int main() {
    //vector<int> arr{4, 5, 2, 25};
    vector<int> arr{ 5, 7, 1, 7 ,6, 0};

    // Find and print next greater elements
    vector<int> result = nextGreaterElements(arr);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
