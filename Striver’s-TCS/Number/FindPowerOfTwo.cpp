#include <bits/stdc++.h>
using namespace std ;

int findPower(int n){
    int ans ;
while(n>=0){
    if(n==0){
        ans= 1 ;
    }
     ans= 2*findPower(n-1) ;
}
return ans ;
}

int main(){
  int n ;
  cout<<"Enter the value of n "<<endl ;
  cin>>n ;
  int result=findPower(n) ;
  cout<<" power of two is : "<<result <<endl;
   return 0 ;
}