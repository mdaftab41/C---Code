#include<bits/stdc++.h>
using namespace std;

  vector<int> findLeaders(int n, int arr[]) {
        vector<int>ans ;
         int maxLeader=arr[n-1] ;// last elenemt is always leader
          ans.push_back(maxLeader) ;
         for( int i=n-2 ;i>=0 ;i--){
             if(arr[i] >= maxLeader){
                 maxLeader=arr[i] ;
                  ans.push_back(maxLeader) ;
             }
         }
         reverse(ans.begin() , ans.end()) ;
        return ans ;
    }
int main(){
 int arr[6]={16,17,4,3,5,2} ;
 vector<int>result =findLeaders(6 , arr) ;
 for( int i=0 ; i<result.size() ; i++){
    cout<<result[i] <<" " ;
 }
 return 0 ;
}