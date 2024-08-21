#include<bits/stdc++.h>
using namespace std;
// function for compress string
void compress(vector<char>&chars){
  int i=0;
  int ansIndex=0;
  int n=chars.size();
  while(i<n){
    int j=i+1;
    while(j<n &&chars[i]==chars[j]){
        j++;
    }
    chars[ansIndex++]=chars[i];
    cout<<"printing Index  " <<ansIndex<<endl;
    int count=j-i;
    if(count>1){
        string cnt= to_string(count);
        for(char ch: cnt){
            chars[ansIndex++]=ch;
        }
    }
    i=j;
  }
  cout<<ansIndex<<endl;
 // return ansIndex;
}

int main(){
    vector<char> v;  // Create an empty vector to store characters

    cout << "Please enter a word: ";
    char ch;
    while (cin.get(ch) && ch != '\n') {  // Read each character until newline is encountered
        v.push_back(ch);  // Add the character to the vector
    }

    // // Print each character stored in the vector
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i];
    // }
    cout<<endl;
    compress(v);
    return 0;
}

