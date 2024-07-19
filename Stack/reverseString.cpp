#include <bits/stdc++.h>
using namespace std;
 
void reversebyStack(string &str)
{
   stack<char> st;
   for (int i=0; i<str.length(); i++)
      
       st.push(str[i]);
 
   for (int i=0; i<str.length(); i++) {
      
       str[i] = st.top();
       st.pop();
   }       
}
 
int main()
{
    string str = "mdaftabalam";
    reversebyStack(str);
    cout << str;
    return 0;
}