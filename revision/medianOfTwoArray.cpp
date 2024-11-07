#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double medianOfSortedArrays(vector<int>& a, vector<int>& b) {
    // Insert elements of b into a
    a.insert(a.end(), b.begin(), b.end());

    // Sort the combined array
    sort(a.begin(), a.end());

    int n = a.size();
    double median;

    // Calculate median
    if (n % 2 == 0) {
        // Average of two middle elements if even number of elements
        median = (a[n / 2] + a[(n / 2) - 1]) / 2.0;
    } else {
        // Middle element if odd number of elements
        median = a[n / 2];
    }

    return median;
}

int main() {
    vector<int> nums1 = {1, 3};       // Sample input vector 1
    vector<int> nums2 = {2};          // Sample input vector 2

    // Calculate and print the median
    double median = medianOfSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;

    vector<int> nums3 = {1, 2};       // Another sample input vector 1
    vector<int> nums4 = {3, 4};       // Another sample input vector 2

    // Calculate and print the median for the second example
    median = medianOfSortedArrays(nums3, nums4);
    cout << "Median: " << median << endl;

    return 0;
}
