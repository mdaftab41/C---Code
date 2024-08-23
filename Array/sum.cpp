#include<bits/stdc++.h>
using namespace std;

//function to find the sum of starting 10 multiple of number

int sum(int n){
    int sum=n*(55) ;//we use sum of natural number = n*(n+2)/2 ;for 10 sum==55
    return sum;
}

int main(){
   int n;
   cin>> n;
   cout<<"enter the value of n" <<endl;
   cout<<sum(n)<<endl;
    return 0 ;
}