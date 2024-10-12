#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool isIsomorphic(string s, string t) {
    unordered_map<char, int> v1, v2;
    
    for (int i = 0; i < s.size(); i++) {
        // Check if the characters in `s` and `t` have been seen at the same position before
        if (v1[s[i]] != v2[t[i]]) {
            return false;
        }
        // Update the maps with the latest positions
        v1[s[i]] = i + 1;
        v2[t[i]] = i + 1;
    }
    
    return true;
}

int main() {
    string s = "afrtb";
    string t = "manmg";
    
    bool result = isIsomorphic(s, t);
    
    if (result) {
        cout << "The strings \"" << s << "\" and \"" << t << "\" are isomorphic." << endl;
    } else {
        cout << "The strings \"" << s << "\" and \"" << t << "\" are not isomorphic." << endl;
    }
    
    return 0;
}
