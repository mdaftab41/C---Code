#include <bits/stdc++.h>
using namespace std;
void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0, j = n - 1; i < j; i++, j--)
        swap(str[i], str[j]);
}
int main()
{
    string str = "mdaftabalam";
    reverseStr(str);
    cout << str;
    return 0;
}