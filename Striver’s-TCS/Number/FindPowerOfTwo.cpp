#include <bits/stdc++.h>
using namespace std ;

int findPower(int n){
    if(n==0){
        return 1 ;
        
    }
     return  2*findPower(n-1) ;
}

int main(){
  int n ;
  cout<<"Enter the value of n "<<endl ;
  cin>>n ;
  int result=findPower(n) ;
  cout<<" power of two is : "<<result <<endl;
   return 0 ;
}