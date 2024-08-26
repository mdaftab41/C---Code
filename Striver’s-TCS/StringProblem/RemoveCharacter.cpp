#include <bits/stdc++.h>
using namespace std;
string removeChara( string str){
    string ans ;
    for(int i=0 ;i<str.size() ; i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            ans.push_back(str[i]) ;
        }
    }
    return ans;
}

int main(){
    string str ;
    cout<<"Enter the string"<<endl;
    getline(cin , str);
    cout<<"Remove characters from a string except alphabets : "<<removeChara(str)<<endl;

    return 0 ;
}