#include <bits/stdc++.h>
using namespace std;

bool powerOfTwo( int n){
    if(n==1) return true ;
    if(n<=0 || n%2!=0) return false ;
    return powerOfTwo(n/2) ;
}


int main(){
  int n ;
  cout<<"Enter the value of n"<<endl;
  cin>>n ;
  if(powerOfTwo(n)){
    cout<<n <<" is power of two "<<endl;
  }else{
     cout<<n <<" is Not power of two "<<endl;
  }
    return 0;
}