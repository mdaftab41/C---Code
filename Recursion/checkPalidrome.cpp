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
    string name = "AbbB";
    string str= name;
    cout<<name<<endl;
    int n = str.length();
    reverse(str, 0, n - 1); // Call the reverse function
    cout << str << endl;    // Output the reversed string
    if(name == str){
        cout<<"Polidrome"<<endl;
    }
    else{
        cout<<" Not Polidrome"<<endl ;
    }
    return 0;
}
