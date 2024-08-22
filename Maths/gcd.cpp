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

int gcdRecusion( int a, int b){
    if(b!=0)
      return gcdRecusion(b ,a%b);
    else
      return a;
}

int main(){
    int a , b ;
    cout<<"Enter the number to find Hcf"<<endl;
    cin>>a>>b ;
    int gcd=gcdFun(a,b);
    int ans=gcdRecusion(a, b);
    cout<<"HCF using iterative function"<<endl ;
    cout<<"HCF of "<<a<<" , "<<b<<" is : "<<gcd<<endl ;

    cout<<"HCF using iterative function"<<endl ;
    cout<<"HCF of "<<a<<" , "<<b<<" is : "<<ans<<endl ;
    return 0;
}