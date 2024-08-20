#include<bits/stdc++.h>
using namespace std;


int main(){
    char word[80];  // this will hold 79 letters
    cout << "Please enter a word: ";
    cin >> word;
    for( int i=0 ; i< strlen(word) ;i++){
        cout<<word[i] ;
    }
    return 0 ;
}