#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "AFtab";
    string str2 = "Alam";
    string name;
    cout << "Enter the name :" << endl;
    // Can also take the tab as a string;
    getline(cin, name);
    cout << name << endl;
    // length() function Also cout white space as character
    int len = str1.length();
    cout << "Length of " << str1 << " is " << len << endl;
    cout << "Length of " << name << " is " << name.size() << endl;

    // swap(str1,str2) function
    // std::swap(str1, name); // Correct way to swap strings
    string temp = str1;
    str1 = name;
    name = temp;
    cout << str1 << "   " << name << endl;
    // size() function Also count the white space
    cout << str1.size() << " " << str1 << endl;

    return 0;
}
