#include <bits/stdc++.h>
using namespace std ;
 // m1
int fib( int n){
    if(n==0 || n== 1)
        return n;
   // cout<< n<<" ";    
    return fib(n-1)+fib(n-2) ;
     
}

void fibonacciIterative(int n) {
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        return fib[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }
    cout << endl;
}

int main(){
int n ;
cout<<"Enter the no"<<endl;
cin>>n;
int m=fib(n);
cout<<"Recursive Fabonacci series "<<m<<endl;
cout<<" Iterative Fabonacci series ";
fibonacciIterative(n);
}