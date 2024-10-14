#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char ch : s) {
        // Push opening brackets onto the stack
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            // If the stack is empty or does not match the top, it's invalid
            if (st.empty()) return false;

            // Check for matching pairs
            if ((ch == ')' && st.top() != '(') ||
                (ch == '}' && st.top() != '{') ||
                (ch == ']' && st.top() != '[')) {
                return false;
            }

            // Pop the stack for a valid matching pair
            st.pop();
        }
    }

    // If the stack is empty, all brackets are matched correctly
    return st.empty();
}

int main() {
    string s;
    cout << "Enter a string of brackets: ";
    cin >> s;

    if (isValid(s)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
