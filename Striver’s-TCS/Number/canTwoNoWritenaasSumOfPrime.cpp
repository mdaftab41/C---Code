# include <bits/stdc++.h>
using namespace std ;

bool isPrime(int n){
    if(n<=1){
        return false ;
    }

    for(int i=2; i*i<=n ;i++){
        if(n%i==0){
            return false ;
        }
    }
    return true ;
}

//

bool canWrittenAsPrime(int n){
    for(int i=2; i<n/2 ; i++){
              if(isPrime(i) && isPrime(n-i)){
                cout<<n<<" = "<< i<<" + "<<n-i<<endl;
                 return true ;
                } 
        }
      return false ;  
}
int main(){
    int n ;
    cout<<"Enter the Number "<<endl;
    cin>> n ;
    if(canWrittenAsPrime(n)){
        cout<<n << " : Can be written as sum of two prime no"<<endl ;
    }else{
     cout<<n<<" : Can Not be written as sum of two prime no"<<endl ;   
    }
    return 0 ;
}