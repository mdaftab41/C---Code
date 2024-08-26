#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin ,str);
    cout<<"string before reverse the word"<<endl;
    cout<<str<<endl;
    str+=" "; 
    string st ="";
    stack<string>temp ;
    int i;
    //Adding the string into stack
    for( i=0 ;i<str.length();i++){
        if(str[i]==' '){
            temp.push(st);
            st="";
        }else{
            st+=str[i] ;
            cout<<"st : "<<st<<endl;
        }
    }
    //adding string from to ans string 
    string ans;
    while(temp.size()>1){
        ans=temp.top()+" ";
        temp.pop();
    }
    ans+=temp.top();//last word don't required space 
       // temp.pop();
    cout<<"string after word reverse "<<endl;
    cout<<ans<<endl;
}