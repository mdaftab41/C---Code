 #include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[]={2,3,3,4,5,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    //set < int > s;
    // for(int i=0;i<n; i++){
    //     s.insert(arr[i]);
    // }

    //Direct copy the array into set

    //set<int>s(begin(arr), end(arr));
    set<int> s(arr, arr+n);
    
    for(auto it: s){
        cout<<it<<"";
    }
    cout<<endl;
   cout<<s.size();
   
   
}