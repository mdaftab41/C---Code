#include <iostream>
#include <string>
#include <climits>   

using namespace std;   

int myAtoi(string s) {   
    long long int ans = 0;
    int i = 0;

    
    while (s[i] == ' ') i++;
    
    bool isNegative = false;  
    
    // Handle signs
    if (s[i] == '-') { 
        isNegative = true;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    
    while (s[i] == '0') i++;

    
    while (s[i] >= '0' && s[i] <= '9') {
        if (ans > INT_MAX) {
            return isNegative ? INT_MIN : INT_MAX;
        }
        ans = ans * 10 + (s[i] - '0');
        i++;
    }

    
    if (isNegative) {
        ans *= -1;
    }

    
    if (ans > INT_MAX) return INT_MAX;
    if (ans < INT_MIN) return INT_MIN;

    return static_cast<int>(ans);
}

int main() {
    string s = "   -42";   
    cout << myAtoi(s) << endl;   
    return 0;
}
