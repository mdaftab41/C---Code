#include <bits/stdc++.h>
using namespace std;
 
 
void recursiveReverse(string &str, int i = 0)
{
    int n = str.length();
    if (i == n / 2)
        return;
   
    swap(str[i], str[n - i - 1]);
  // Call Recursive function after incrementing i.
    recursiveReverse(str, i + 1);
}
 
 
int main()
{
    string str = "geeksforgeeks";
    recursiveReverse(str);
    cout << str;
    return 0;
}