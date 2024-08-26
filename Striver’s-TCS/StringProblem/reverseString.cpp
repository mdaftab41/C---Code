#include <bits/stdc++.h>
using namespace std;
string reverse( string str){
    stack<char> ans ;
    for(int i=0 ; i<str.size(); i++){
        ans.push(str[i]);   
    }
    int j=0 ;
    while (!ans.empty())
    {
         char ch=ans.top();
         ans.pop();
         str[j]=ch ;
         j++;
    }
    return str ;
}


int main(){
    string str ;
    cout<<"Enter the string "<<endl;
    getline(cin ,str) ;
    cout<<"String before Reverse : "<<str <<endl ;

     cout<<"String before Reverse : "<<reverse(str) <<endl ;

    return 0 ;
}