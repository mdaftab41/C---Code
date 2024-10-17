#include<bits/stdc++.h>
using namespace std  ;

vector<vector<int>>subSet(vector<int>&nums){
    int n=nums.size() ;
    vector<vector<int>>ans;
    for( int i=0 ; i<(1<<n) ; i++){
        vector<int>result;
        for( int j=0 ; j<n ; j++){
            if( i & (1<<j)){
                result.push_back(nums[j]) ;
            }
        }
        ans.push_back(result) ;
    }
    return ans ;
}

int main(){
    int m ; 
    cout<<"Enter the array Size"<<endl;
    cin>>m ;
    cout<<"Enter the Array elament"<<endl;
    vector<int>arr(m);
    for( int i=0 ; i<m; i++){
    cin>>arr[i] ;
    }
    vector<vector<int>>ans=subSet(arr) ;
    for( auto it:ans){
        for(auto jt :it){
              cout << jt << " ";
        }
        cout<<endl;
    }
  return  0;
}