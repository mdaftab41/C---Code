#include<bits/stdc++.h>
using namespace std;

int modularExp(int x ,int n ,int m){
    int res=1;
    while(n>0){
        if(n&1){
            //odd number
            //x agar odd hai to simple multiply kar na hai
            res=(1LL*(res)*(x)%m)%m;
        }
        //x agar even hai to square karni hai 
        x=(1LL*(x)%m*(x)%m)%m;
        n=n>>1;
    }
    return res ;
}

int main(){
    int a=4 , b=3, c=10;
    int ans=modularExp(a,b,c);
    cout<<ans;
    return 0;
}