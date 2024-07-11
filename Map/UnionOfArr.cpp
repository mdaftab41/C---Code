# include<bits/stdc++.h>
using namespace std ;

void unionOfArr( int arr1[] , int n , int arr2[] , int m){
    unordered_map<int , int> mp;
    int ans=0 ;
   // int i , j;
    for( int i =0 ; i<n ; i++){
        if(mp[arr1[i]]==0){
            ans++ ;
            mp[arr1[i]]++;
        }
    }

    for( int j= 0 ; j<m ; j++){
        if(mp[arr2[j]]==0){
            ans++;
            mp[arr2[j]]++;
        }
    }
    for(auto it=mp.begin() ; it!= mp.end() ;it++){
        cout<<it->first<<" --> " <<it->second <<endl ;
    }
    //  for(auto it : mp){
    //     cout<<it.first<<" --> " <<it.second <<endl ;
    // }
    
}



int main(){

     int arr1[] = {2,4,6,7};
     int arr2[] ={8,9,0,2,5,6,5,4};
     int m=8;
     int n=4;
     cout<<" union of array"<<endl;
    unionOfArr(arr1 , n , arr2 , m) ;
    return 0;
}