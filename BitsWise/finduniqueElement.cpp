#include <bits/stdc++.h>
using namespace std ;

int findUnique(vector<int>&arr){
    int unique=0;
    for( int i=0 ; i<arr.size(); i++){
      int unique=unique^arr[i];
    }
    return unique ;
}


int main(){
    int n ;
    cin>>n ;
    vector<int>arr(n) ;
    for(int i=0 ; i<n.size() ; i++){
        cin>>arr[i] ;
    }
    int ans =findUnique(arr) ;
    cout<<"Unique Element is : " <<ans<<endl;
    return 0;
}