#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mp;
        int count = 0;

        // Count the frequency of each task
        for (int i = 0; i < tasks.size(); i++) {
            mp[tasks[i]]++;
        }

        // Iterate over the frequencies
        for (auto it : mp) {
            int freq = it.second;

            // If the frequency is 1, it's impossible to form a valid round
            if (freq == 1) {
                return -1;
            }

            // First, try to take as many full rounds of 3 as possible
            count += freq / 3;

            // Then, handle the remainder. If the remainder is 2, one more round is needed
            int rem = freq % 3;
            if (rem == 2) {
                count++; // One more round for the remaining 2 tasks
            } else if (rem == 1) {
                count++; // One more round for the remaining 1 task (by adding 2 tasks)
            }
        }

        return count;
    }
};

int main() {
    Solution solution;
    vector<int> tasks = {69, 65, 62, 64, 70, 68, 69, 67, 60, 65, 69, 62, 65, 65, 61, 66, 68, 61, 65, 63, 60, 66, 68, 66, 67, 65, 63, 65, 70, 69, 70, 62, 68, 70, 60, 68, 65, 61, 64, 65, 63, 62, 62, 62, 67, 62, 62, 61, 66, 69};
    
    int result = solution.minimumRounds(tasks);
    cout << "Minimum rounds required: " << result << endl;

    return 0;
}
