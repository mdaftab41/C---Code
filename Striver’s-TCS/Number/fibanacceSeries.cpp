#include <bits/stdc++.h>
using namespace std ;

int fib( int n){
    if(n==0 || n== 1)
        return 1;
    return fib(n-1)+fib(n-2) ;
}

int main(){
int n ;
cout<<"Enter the no"<<endl;
cin>>n;
int m=fib(n);
cout<<"Fabanoicce series "<<m<<endl;
}