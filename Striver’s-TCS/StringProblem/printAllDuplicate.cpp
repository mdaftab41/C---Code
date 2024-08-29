#include <bits/stdc++.h>
using namespace std;
void printDuplicate( string &str){
    string ans;
    int len=str.size() ;
    int arr[26]={0} ;
    for(int index=0 ; index< len; index++){
        arr[str[index]-'a']++;
    }

    for( int i=0; i< 26 ; i++){
        if(arr[i]>1){
            ans += char(i + 'a');
            cout << (char)(i + 'a') << " - " << arr[i] << "\n";
        }
    }
    cout<<"Duplicate Letter : "<<ans<<endl;
}


int main(){
    string str;
    cout<<"Enter the string "<<endl;
    getline(cin ,str);
    cout<<str<<endl;
    cout<<"calling find All Duplicate letter function "<<endl;
    printDuplicate(str);
}