#include <bits/stdc++.h>
using namespace std ;

bool isPoweroftwo( int n){
    int ans=1 ;
    for(int i=0 ; i<=30 ; i++){
        if(ans==n){
            return true ;
        }
        if(ans<INT_MAX/2){
            ans=ans*2 ;
        }
    }
    return false ;
}

int main(){
   int n ;
   cout<<"Enter the power of 2"<<endl;
   cin>>n ;
   if(isPoweroftwo(n)){
    cout<<n<<" power of two"<<endl;
   }else{
    cout<<n<<" Not power of two"<<endl ;
   }
    return 0 ;
}