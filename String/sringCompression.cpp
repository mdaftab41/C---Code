#include<bits/stdc++.h>
using namespace std;


int main(){
   // char word[80];  // this will hold 79 letters
   //vector<car>v (80);
    cout << "Please enter a word: ";
    //cin >> word;
    // char ch;
    // for( int i=0 ; i<80;i++){
    //     cin>>ch;
    //     v.push_back(ch);
    // }
    // for( int i=0 ; i<=v.size(); i++){
    //      cout<<v[i];
    // }
    // return 0 ;
    vector<char> v;  // Create an empty vector to store characters

    cout << "Please enter a word: ";

    char ch;
    while (cin.get(ch) && ch != '\n') {  // Read each character until newline is encountered
        v.push_back(ch);  // Add the character to the vector
    }

    // Print each character stored in the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }

    return 0;
}

a