#include<bits/stdc++.h>
using namespace std;
 
 
bool isPrime(int n){
   // int count=0;
    if(n<=1)
    return false;

for(int i=2 ;i<n ;i++){
    if(n%i==0){
        return false ;
    }
}
return true;
}
//function to count the prime no
int countPrime(int n){
    int count=0;
    for(int i=2 ; i<n ;i++){
        if(isPrime(i)){
            count++;
        }
    }
   // cout<<count<<endl;
    return count;
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

    int ans=countPrime(n);
    cout<<"No of prime no which is less than "<<" "<<n <<" is : "<<ans<<endl ;

 return 0;   
}