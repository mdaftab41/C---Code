#include<bits/stdc++.h>
using namespace std;

// Given an array arr[] of size N and an integer K.
//  Find the maximum for each and every contiguous subarray of size K.

 vector<int> maxInSubarrays(int arr[], int n, int k) {
    vector<int> ans;

    for (int i = 0; i <= n - k; i++) {
        int max_val = arr[i]; // Start with the first element in the current window

        // Find the maximum in the current window
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max_val) {
                max_val = arr[i + j];
            }
        }

        ans.push_back(max_val); // Add the maximum to the result
    }

    return ans;
}

int main(){
 int arr[12]={2,4,2,4,5,3,12,11,14,4,15,32} ;
 vector<int>ans=maxInSubarrays(arr , 12 ,3) ;
 for(int i=0 ; i<ans.size()  ; i++){
    cout<<ans[i]<<" "  ;
 }
 cout<<endl ;

    return 0;

}