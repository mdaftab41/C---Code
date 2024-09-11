#include <bits/stdc++.h>
using namespace std;

int findUnique( int arr[] , int n){
    int ans=0 ;
    for( int i=0 ; i< n; i++){
        ans=ans^arr[i];
    }
    return ans ;
}

// print function 
void print(int arr[] , int n){
    for( int i=0 ; i<n ; i++){
    cout<<arr[i]<<" " ;
}cout<<endl;

 }
int main(){
int n ;
cout<<"Enter the size"<<endl;
cin>>n ;
int arr[n] ;
for( int i=0 ; i<n ; i++){
    cin>>arr[i];
}
print(arr , n) ; 
int unique = findUnique(arr , n) ;
cout<<"unique no is : "<<unique<<endl;
return 0 ;
}