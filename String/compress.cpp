#include <iostream>
#include <vector>
#include <string>

using namespace std;

int compress(vector<char>& chars) {
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    
    while (i < n) {
        int j = i + 1;
        
        // Count the number of identical characters
        while (j < n && chars[i] == chars[j]) {
            j++;
        }
        
        // Store the character
        chars[ansIndex++] = chars[i];
        
        int count = j - i; // Calculate the count of characters
        if (count > 1) {
            string cnt = to_string(count); // Convert count to string
            for (char ch : cnt) {
                chars[ansIndex++] = ch; // Store each digit in chars
            }
        }
        
        i = j; // Move to the next new character
    }
    
    return ansIndex; // Return the new length of the compressed string
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength = compress(chars);
    
    cout << "Compressed Length: " << newLength << endl;
    cout << "Compressed Characters: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i];
    }
    cout << endl;
    
    return 0;
}
