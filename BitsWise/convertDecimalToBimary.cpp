#include<bits/stdc++.h>
using namespace std;

string DecToBinary( int n){
    string str= "" ;
    while(n != 0){
        if(n%2==1){
            str+="1" ;
        }else{
            str+="0" ;
        }
        n=n/2 ;
    }
    return str ;
}


int main(){
    int n ;
    cout<<"Enter the va;ue of n " <<endl;
    cin>> n ;
    string temp=DecToBinary(n) ;
    cout<<"Binary of "<<n <<"  is : " ;
    cout<<temp ;
    return 0 ;
}