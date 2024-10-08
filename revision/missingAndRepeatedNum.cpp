#include <bits/stdc++.h>
using namespace std;
vector<int> FindMissingAndRepeating(vector<int>&arr){
     map<int , int>mp;
        int n=arr.size() ;
        int repeated=-1 ;
        int missing=-1;
        for (int i = 1; i <= n; i++) {
        mp[i] = 0;
    }

        for(int i=0 ; i<n ; i++){
            mp[arr[i]]++;
        }
        for(auto it: mp){
            if(it.second>1) repeated =it.first ;
            if(it.second==0) missing =it.first ;
            if(repeated!=-1 && missing != -1){
                break;
            }
        }
        return {missing , repeated} ;
}

// vector<int> findTwoElement(vector<int>& arr) {
//         int n=arr.size() ;
//         vector<bool>visited(n+1 ,0) ;
//         int missing =-1 ;
//         int repeated=-1;
//         for( int i=0 ; i< n; i++){
//             if(visited[arr[i]]){
//                 repeated=arr[i] ;
//             }
//             visited[arr[i]]=1;
//         }
//         for( int i=1 ; i<=n ; i++){
//             if(!visited[i]){
//                missing=i ; 
//                break ;
//             }
//         }
//         return { repeated ,missing } ;
//     }


// vector<int> findMissingRepeatingNumbers(vector<int> a) {
//     int n = a.size(); // size of the array
//     int hash[n + 1] = {0}; // hash array

//     //update the hash array:
//     for (int i = 0; i < n; i++) {
//         hash[a[i]]++;
//     }

//     //Find the repeating and missing number:
//     int repeating = -1, missing = -1;
//     for (int i = 1; i <= n; i++) {
//         if (hash[i] == 2) repeating = i;
//         else if (hash[i] == 0) missing = i;

//         if (repeating != -1 && missing != -1)
//             break;
//     }
//     return {repeating, missing};
// }



int main(){
    vector<int> arr = {1, 3, 3, 4, 5, 6, 7}; // Example array
    vector<int> result = FindMissingAndRepeating(arr);

    // Output the result
    cout << "Missing Number: " << result[0] << endl;
    cout << "Repeating Number: " << result[1] << endl;

    return 0;
    return 0;
}