#include <bits/stdc++.h>
using namespace std;
int main(){
    string str ;
    cout<<"Enter the string"<<endl;
    getline(cin ,str) ;
     cout<<"String before reverse : "<<str<<endl;
    stack<char> ans ;
    for(int i=0 ;i<str.length() ; i++){
        ans.push(str[i]) ;
    }
    int j=0 ;
    while(!ans.empty()){
        char ch=ans.top() ;
        ans.pop() ;
        str[j] =ch;
        j++ ; 
    }
    cout<<"String after reverse : "<<str<<endl;
    return 0;
}