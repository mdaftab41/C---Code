#include <bits/stdc++.h>
using namespace std;

bool anagram( string str ,string s){
    for(int i=0; i<str.size(); i++){
        str[i] = towlower(str[i]);
        s[i] = towlower(s[i]);
    }
    sort(str.begin(), str.end()) ;
    sort(s.begin(), s.end());
      

    for(int i=0; i<str.size(); i++){
        str[i] = towlower(str[i]);
        s[i] = towlower(s[i]);
        if(s[i]!=str[i]){
            return false ;
        }
    }
  
    return true ;
}

int main(){
    string str;
    string s;
    cout<<"Enter the two string "<<endl;
    cin>>str>>s ;
    if(anagram(str ,s)){
        cout<<"string are anagram of each other "<<endl;
    }else{
        cout<<"string are not anagram of each other "<<endl;
    }
    return 0;
}