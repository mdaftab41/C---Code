#include<bits/stdc++.h>
using namespace std;

//function to count the prime no
int countprimes( int n){
    int cnt=0 ;
    //marks the all no as prime no
    vector<bool> prime(n+1 , true);
    // marks 0 and 1 as nonPrime no
    prime[0]=prime[1]=false ;
    for( int i=2; i<n ;i++){
        if(prime[i]){
            cnt++;
            for(int j=2*i ; j<n ; j=j+i){
                prime[j]=0;
            }
        }
    }
    return cnt ;
}

int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    int ans=countprimes(n);
    cout<<ans<<endl;
}