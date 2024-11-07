#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find_median(vector<int> v) {
    int median;
    sort(v.begin(), v.end());  // Sort the vector
    int n = v.size();
    
    if (n % 2 == 0) {
        // If even, average the two middle elements
        median = (v[n / 2] + v[(n / 2) - 1]) / 2;
    } else {
        // If odd, take the middle element
        median = v[n / 2];
    }
    
    return median;
}

int main() {
    vector<int> v = {1, 3, 5, 7, 9}; // Sample input
    cout << "Median: " << find_median(v) << endl;
    
    vector<int> v2 = {1, 3, 5, 7}; // Another sample input
    cout << "Median: " << find_median(v2) << endl;
    
    return 0;
}
