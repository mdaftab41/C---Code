#include <iostream>
#include <string>

using namespace std;

bool rotateString(string s, string goal) {
    string str = s + s; // Concatenate s with itself
    int m = str.size();
    string temp;

    // Sliding window over concatenated string
    for (int i = 0; i < m; i++) {
        temp += str[i]; // Add current character to temp
        
        // Check if temp matches goal and sizes are the same
        if (temp == goal && s.size() == goal.size()) {
            return true;
        }
        
        // When temp is same length as goal, start removing characters from the front
        if (temp.size() == goal.size()) {
            temp.erase(temp.begin());
        }
    }
    
    return false; // No match found
}

int main() {
    string s, goal;
    
    // Input strings
    cout << "Enter the original string (s): ";
    cin >> s;
    cout << "Enter the goal string: ";
    cin >> goal;

    // Check if `goal` is a rotation of `s`
    bool result = rotateString(s, goal);

    if (result) {
        cout << "\"" << goal << "\" is a rotation of \"" << s << "\"." << endl;
    } else {
        cout << "\"" << goal << "\" is NOT a rotation of \"" << s << "\"." << endl;
    }

    return 0;
}
