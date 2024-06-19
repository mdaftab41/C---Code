// not A recursion problem 

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to check if two rectangles overlap
    bool isRectangleOverlap(vector<int>& rect1, vector<int>& rect2) {
        // Extracting coordinates of the first rectangle
        int fx1 = rect1[0]; // Bottom-left x-coordinate
        int fx2 = rect1[2]; // Top-right x-coordinate
        int fy1 = rect1[1]; // Bottom-left y-coordinate
        int fy2 = rect1[3]; // Top-right y-coordinate

        // Extracting coordinates of the second rectangle
        int sx1 = rect2[0]; // Bottom-left x-coordinate
        int sx2 = rect2[2]; // Top-right x-coordinate
        int sy1 = rect2[1]; // Bottom-left y-coordinate
        int sy2 = rect2[3]; // Top-right y-coordinate

        // Check if the rectangles do not overlap using non-overlapping conditions
        return !((sy1 >= fy2) ||  // Second rectangle is completely above the first
                 (fy1 >= sy2) ||  // First rectangle is completely above the second
                 (fx1 >= sx2) ||  // First rectangle is completely to the right of the second
                 (fx2 <= sx1));   // First rectangle is completely to the left of the second
    }
};

int main() {
    Solution solution;
    
    // Example rectangles
    vector<int> rect1 = {0, 0, 2, 2}; // First rectangle
    vector<int> rect2 = {1, 1, 3, 3}; // Second rectangle
    
    // Check if the rectangles overlap
    bool result = solution.isRectangleOverlap(rect1, rect2);
    
    // Output the result
    cout << "Rectangles overlap: " << (result ? "Yes" : "No") << endl;
    
    return 0;
}
