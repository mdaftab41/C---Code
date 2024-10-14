 #include <iostream>
#include <string>
using namespace std;

// int strStr(string haystack, string needle) {
//     int n = haystack.size();
//     int m = needle.size();
    
//     if (m > n) {
//         return -1;
//     }
    
//     if (n == m && needle == haystack) {
//         return 0;
//     }
    
//     string temp = "";
//     for (int i = 0; i < n; i++) {
//         if (temp != needle) {
//             temp += haystack[i];
//             if (temp.size() > m) {
//                 temp.erase(temp.begin(), temp.begin() + 1);
//             }
//         }
        
//         // Debugging output to track current temp and index
//         cout << "Current temp: " << temp << " at index " << i << endl;

//         if (temp == needle && temp.size() == m) {
//             return i - m + 1;  // Adjusted to return correct starting index
//         }
//     }
    
//     return -1;
// }



int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        
        if (m > n) return -1;  // If needle is longer than haystack
        if (needle == haystack) return 0;  // If both strings are identical

        for (int i = 0; i <= n - m; i++) {  // Loop until there's enough space for needle
            if (haystack.substr(i, m) == needle) {
                return i;  // Found the needle in haystack
            }
        }
        
        return -1;  // Needle not found
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
