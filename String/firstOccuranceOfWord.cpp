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
        } else if (temp == needle && temp.size() == m) {
            return i - m;
        }
    }
    
    if (temp == needle && temp.size() == m) {
        return n - m;
    }
    
    return -1;
}

int main() {
    string haystack, needle;
    cout << "Enter the haystack string: ";
    cin >> haystack;
    cout << "Enter the needle string: ";
    cin >> needle;
    
    int result = strStr(haystack, needle);
    cout << "Output: " << result << endl;
    
    return 0;
}
