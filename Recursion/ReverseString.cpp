 #include <iostream>
using namespace std;

// Function to reverse the string
void reverse(string &str, int start, int end) {
    if (start >= end) {
        return;
    }
    // Swap characters at start and end
    swap(str[start], str[end]);
    // Recursively reverse the rest of the string
    reverse(str, start + 1, end - 1);
}

int main() {
    string str = "Aftabalam";
    int n = str.length();
    reverse(str, 0, n - 1); // Call the reverse function
    cout << str << endl;    // Output the reversed string
    return 0;
}
