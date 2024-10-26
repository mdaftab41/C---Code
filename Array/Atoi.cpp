#include <iostream>
#include <climits>
#include <string>

int myAtoi(std::string s) {
    long long int ans = 0;
    int i = 0;
    
    // Skip leading spaces
    while (s[i] == ' ') i++;

    // Determine the sign
    bool sign = 0; // false means positive, true means negative
    if (s[i] == '-') { 
        sign = 1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }
    
    // Skip leading zeroes
    while (s[i] == '0') i++;

    // Convert numeric part
    while (s[i] >= '0' && s[i] <= '9') {
        if (ans > INT_MAX) {
            return sign ? INT_MIN : INT_MAX;
        }
        ans = ans * 10 + (s[i] - '0');
        i++;
    }

    // Apply sign
    if (sign) ans = -ans;

    // Handle overflow cases
    if (ans > INT_MAX) return INT_MAX;
    if (ans < INT_MIN) return INT_MIN;

    return static_cast<int>(ans);
}

int main() {
    std::string str;
    std::cout << "Enter a string to convert: ";
    std::getline(std::cin, str);
    
    int result = myAtoi(str);
    std::cout << "Converted integer: " << result << std::endl;

    return 0;
}
