#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin , str) ;
    int len=str.length();
    unordered_map<char , int>mp;
    for(int i=0 ; i<len; i++){
        mp[str[i]]++;
    }
    for(auto i: mp){
        if(i.second>1)
         cout<<i.first <<"------>"<<i.second<<endl;
    }
}