#include <bits/stdc++.h>
using namespace std ;


void printCount(int n){
    if(n==0){
        return  ;
    }
   // cout<<n <<endl; 
    printCount(n-1) ;
    cout<<n <<endl; 
}

int main(){
    int n ;
    cout<<"Enter the number "<<endl ;
    cin>>n ;
    cout<<"printing Count " <<endl;
    printCount(n) ;

    return 0 ;
}