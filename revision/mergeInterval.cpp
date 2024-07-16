#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
    vector<vector<int>> v;
    if (intervals.empty()) return v;

    // Sort the intervals based on the start time
    sort(intervals.begin(), intervals.end());

    // Initialize the result with the first interval
    v.push_back({intervals[0][0], intervals[0][1]});

    for (int i = 1; i < intervals.size(); i++) {
        vector<int> temp = v.back(); // Get the last interval in the result

        // Check if there is an overlap
        if (temp[1] >= intervals[i][0]) {
            // If the end of the last interval in the result is greater than or equal to the start of the current interval
            if (temp[1] < intervals[i][1]) {
                // If the end of the last interval is less than the end of the current interval, merge them
                temp[1] = intervals[i][1];
                v.pop_back(); // Remove the last interval
                v.push_back(temp); // Add the merged interval
            }
        } else {
            // If there is no overlap, add the current interval to the result
            v.push_back({intervals[i][0], intervals[i][1]});
        }
    }
    return v;
}

int main() {
    // Example intervals
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

     
    vector<vector<int>> mergedIntervals = overlappedInterval(intervals);

     
    cout << "Merged intervals: " << endl;
    for (const auto& interval : mergedIntervals) {
        cout << "[" << interval[0] << ", " << interval[1] << "]" << endl;
    }

    return 0;
}
