#include<bits/stdc++.h>
using namespace std ;

vector<vector<int>>mergeInterval(vector<vector<int>>&arr , vector<int>&newInterval){
    int n = arr.size() ;
    arr.push_back(newInterval) ;
    vector<vector<int>>ans ;
    sort(arr.begin() , arr.end()) ;
    for( int i=0 ; i<n ; i++){
        if(ans.empty() || arr[i][0] >ans.back()[1]){
            ans.push_back(arr[i]) ;
        }else{
           ans.back()[1] =max(arr[i][1]  ,ans.back()[1])  ;
        }
    }
    return ans ;
}

int main(){
    vector<vector<int>>arr{{2,6} ,{3,7},{7,10} , {11 ,14}, {13 ,17} ,{18 ,22} ,{21,27}} ;
    vector<int>interval ;
    cout<<"Inter interval to insert"<<endl;
     for(int i = 0; i < 2; i++) {
        cin >> interval[i];
    }

vector<vector<int>>arr1=mergeInterval(arr ,interval) ;
for(int i=0 ; i<arr1.size() ; i++){
    for( int j=0 ; j<2 ;j++){
        cout<<arr1[i][j]<<" " ;
    }
    cout<<endl;
}

    return 0 ;
}