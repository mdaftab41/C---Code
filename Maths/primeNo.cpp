#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1)
    return false;

for(int i=2 ;i<n ;i++){
    if(n%i==0){
        return false ;
    }
}
return true;
}
int main(){
    cout<<"enter the no"<<endl;
    int n;
    cin>>n ;
    if(isPrime(n)){
        cout<<n<<" "<< "is a prime number"<<endl;
    }else{
        cout<<n<<" "<< "is not a prime number"<<endl;
    }

 return 0;   
}