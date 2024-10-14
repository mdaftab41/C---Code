#include <iostream>
#include <string>
using namespace std;

// Function to find the length of the last word in a string
int lengthOfLastWord(string s) {
    int n = s.size();
    int length = 0;
    
    // Iterate from the end of the string
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            // Break if we have already started counting the last word
            if (length > 0) {
                break;
            }
        } else {
            // Count the length of the last word
            length++;
        }
    }
    
    return length;    
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    // Calculate and print the length of the last word
    int result = lengthOfLastWord(input);
    cout << "Length of the last word: " << result << endl;
    
    return 0;
}
