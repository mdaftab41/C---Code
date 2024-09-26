#include <bits/stdc++.h>
using namespace std ;
 void findMinElement( int arr[] , int n){
    int minElement=arr[0];
    for( int i=0 ; i<n; i++){
    minElement=min(arr[i] , minElement) ;
    }
    cout<<"Minimum Element of Array : "<<minElement <<endl;
 }

 int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i] ;
    }
    findMinElement(arr , n) ;
    return 0 ;
 }