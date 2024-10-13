#include <iostream>
#include <map>
#include <string>
using namespace std;

string intToRoman(int num) {
    map<int, string> ans;
    ans[1000] = "M";
    ans[900] = "CM";
    ans[500] = "D";
    ans[400] = "CD";
    ans[100] = "C";
    ans[90] = "XC";
    ans[50] = "L";
    ans[40] = "XL";
    ans[10] = "X";
    ans[9] = "IX";
    ans[5] = "V";
    ans[4] = "IV";
    ans[1] = "I";
    
    auto it = ans.rbegin(); // Start from the largest element
    string temp = "";

    while (num > 0) {
        if (num >= it->first) {
            temp += it->second;
            num -= it->first;
        } else {
            ++it;  // Move to the next smaller element
        }
    }

    return temp;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    string result = intToRoman(num);
    cout << "Roman numeral representation: " << result << endl;

    return 0;
}
