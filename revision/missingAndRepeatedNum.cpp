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

int main(){
    vector<int> arr = {1, 3, 3, 4, 5, 6, 7}; // Example array
    vector<int> result = FindMissingAndRepeating(arr);

    // Output the result
    cout << "Missing Number: " << result[0] << endl;
    cout << "Repeating Number: " << result[1] << endl;

    return 0;
    return 0;
}