#include <iostream>
#include <string>
#include <climits>   

using namespace std;   


/*Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.

The algorithm for myAtoi(string s) is as follows:

Whitespace: Ignore any leading whitespace (" ").
Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity is neither present.
Conversion: Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round the integer to remain in the range. Specifically, integers less than -231 should be rounded to -231, and integers greater than 231 - 1 should be rounded to 231 - 1.
Return the integer as the final result.*/

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
