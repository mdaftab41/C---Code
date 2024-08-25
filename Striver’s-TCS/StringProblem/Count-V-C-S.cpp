#include <bits/stdc++.h>
using namespace std;
void count(string str){
    int vowels=0;
    int consonant = 0;
    int space = 0;
    for( int i=0 ; i<str.length(); i++){
        if(towlower(str[i])=='a' || towlower(str[i])=='e' || towlower(str[i])=='i' || towlower(str[i])=='o' || towlower(str[i])=='u'){
            vowels++ ;
        }else if(towlower(str[i])>='a' && towlower(str[i])<='z'){
            consonant++ ;
        }else if(str[i]==' '){
            space++ ;
        }
    }
    cout<<"vowels : "<<vowels<<endl;
    cout<<"consonant : "<<consonant<<endl;
    cout<<"space : "<<space<<endl;
}
int main(){
    string str;
    cout<<"enter the string "<<endl;
    getline(cin , str) ;
    cout<<str <<endl;
    count(str) ;
    return 0;
}
