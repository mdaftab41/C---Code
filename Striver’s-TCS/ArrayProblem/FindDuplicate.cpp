#include <bits/stdc++.h>
using namespace std;

int duplicateElement( int arr[] , int n){
    int ans =0 ;
    for( int i=0 ; i<n ; i++){
        ans=ans^arr[i] ;
    }
    //double the number so duplicate become triple
     for( int i=0 ; i<n ; i++){
        ans=ans^i ;
    }
    return ans ;
}

//  Function to print the Array
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
int duplicate=duplicateElement(arr, n);
cout<<"Duplicate Element is : "<<duplicate<<endl;
    return 0 ;
}