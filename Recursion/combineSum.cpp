#include <bits/stdc++.h>
using namespace std;

void findCombination( int ind , int target , vector<int>arr, vector<vector<int>>&ans , vector<int>result){
    if(ind==arr.size()){
        if(target==0){
            ans.push_back(result) ;
        }
        return ;
    }
    //pick up the element 
    if(arr[ind]<=target){
        result.push_back(arr[ind]) ;
        findCombination(ind , target-arr[ind] , arr , ans ,result) ;
        result.pop_back() ;
    }
     findCombination(ind+1 , target, arr , ans ,result) ;
}

vector<vector<int>>combinationSum( vector<int>condidate ,int target){
    vector<vector<int>>ans;
    vector<int>result ;
    findCombination(0 , target , condidate , ans ,result) ;
    return ans ;
}

int main(){
    int n ;
    cout<<"Enter the size"<<endl;
    cin>>n ;
     
    cout<<"enter the target"<<endl;
    vector<int>arr(n) ;
    cout<<"Enter the Element of Array"<<endl ;
    for( int i=0 ; i<n ; i++){
        cin>>arr[i] ;
    }
    int m ;
    cout<<"enter the target"<<endl;
    cin>>m ;
    vector<vector<int>>ans=combinationSum(arr ,m) ;
    for( int i= 0 ; i<ans.size() ; i++){
        for( int j=0 ; j<ans[0].size() ; j++){
            cout<<ans[i][j]<<" " ;
        }
        cout<<endl;
    }


    return 0 ;
}