#include<bits/stdc++.h>
using namespace std;

int gcdFun(int a, int b){
    if(a==0)
      return b ;
    if(b==0)
      return a;
 while(a!=b){
    if(a>b){
        a=a-b;
    }else{
        b=b-a;
    }
 }
 return a;
}

int main(){
    int a , b ;
    cout<<"Enter the number to find Hcf"<<endl;
    cin>>a>>b ;
    int gcd=gcdFun(a,b);
    cout<<"HCF of "<<a<<" , "<<b<<" is : "<<gcd<<endl ;
    return 0;
}