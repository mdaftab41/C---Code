#include <bits/stdc++.h>
using namespace std ;

bool isPalidrome( string str ){
     int start=0 ;
     int end=str.length()-1 ;
     while (start<=end)
     {  if(!isalnum(str[start])) 
            start++;
        else if(!isalnum(str[end])) 
            end--;
        else if(tolower(str[start])!=tolower(str[end])){
            return false ;
        }
         start++;
         end--;
     }
     return true ;
     
}
int main() {
    string str ;
    cout<<"Enter the string "<<endl ;
    cin>> str ;
     int m =str.length() ;
     cout<<"length of String is : "<<m <<endl;
    cout<<"String is : "<<str<<endl;
    if(isPalidrome(str)){
        cout<<"string is Palidrome"<<endl;
    }else{
    cout<<"string is Not Palidrome"<<endl;
    }
    return 0;
}