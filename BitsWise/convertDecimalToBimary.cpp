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
    reverse(str.begin() , str.end()) ;
    return str ;
}

int BinaryToDec(string str){
    int n =str.length();
    int p2=1 ,num=0 ;
    for( int i=0 ; i<n ; i++){
        if(str[i] =='1'){
            num+=p2 ;
        }
        p2=2*p2 ;
    }
    return num ;
}

int main(){
    int n ;
    cout<<"Enter the value of n " <<endl;
    cin>> n ;
    string temp=DecToBinary(n) ;
    cout<<"Binary of "<<n <<"  is : " ;
    cout<<temp <<endl;
    cout<<" Decimal of  "<<temp<<" is : ";
     reverse(temp.begin() , temp.end());
    int ans=BinaryToDec(temp) ;
    cout<<ans<<endl;
    return 0 ;
}