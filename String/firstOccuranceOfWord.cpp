 #include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();
    
    if (m > n) {
        return -1;
    }
    
    if (n == m && needle == haystack) {
        return 0;
    }
    
    string temp = "";
    for (int i = 0; i < n; i++) {
        if (temp != needle) {
            temp += haystack[i];
            if (temp.size() > m) {
                temp.erase(temp.begin(), temp.begin() + 1);
            }
        }
        
        // Debugging output to track current temp and index
        cout << "Current temp: " << temp << " at index " << i << endl;

        if (temp == needle && temp.size() == m) {
            return i - m + 1;  // Adjusted to return correct starting index
        }
    }
    
    return -1;
}

int main() {
    string haystack, needle;
    cout << "Enter the haystack string: ";
    getline(cin, haystack);  // Using getline for full input
    cout << "Enter the needle string: ";
    getline(cin, needle);    // Using getline for full input
    
    int result = strStr(haystack, needle);
    cout << "Output: " << result << endl;
    
    return 0;
}
