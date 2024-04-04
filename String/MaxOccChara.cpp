# include <bits/stdc++.h>
using namespace std;

char MaxOccChara(string s){
    int arr[26]={0};// every element of array is 0
    // creating array of counting of char 
   
    for(int i=0; i<s.length() ; i++){
        
        char ch =s[i];
            int number=0;
        if(ch>='a' && ch<='z'){
            
            number = ch - 'a';
        }
        else {
              number = ch-'A';
        }
         arr[number]++;
    }

    int maxi= -1, ans=0;
    for( int i=0 ; i<26 ; i++){
        if( maxi <= arr[i]){
            ans= i;
            maxi=arr[i] ;
        }
    }
    char final='a' + ans;
    return final;
    
}

int main(){
    cout<<" Enter the string  to Count Max occurence"<< endl;
    string s;
    cin>> s;
    cout<<MaxOccChara(s)<<endl;

    return 0;
}