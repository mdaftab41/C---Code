#include <bits/stdc++.h>
using namespace std;

 // function to move All Zero in left of Zero
 void moveZero(int arr[] , int n){
    //two pointer Approch
    int j=0 ;
    for( int i=0 ; i<n ; i++){
        if(arr[i]!=0){
            swap(arr[i] , arr[j]) ;
            j++ ;
        }
    }
    for( int i=0 ; i<n; i++){
        cout<<arr[i]<<" "  ;
    }
    cout<<endl ;

 }

 

int main(){
    int n;
    cout<<"Enter  the size of array"<<endl;
    cin>>n ;
    int arr[n] ;
    cout<<"Enter the value of array"<<endl;
    for( int i=0 ; i<n ; i++){
        cin>>arr[i] ;
    }
    cout<<" Array before moving zero"<<endl;
     for( int i=0 ; i<n; i++){
        cout<<arr[i]<<" "  ;
    }
     cout<<endl<<" Array After moving zero"<<endl;
     moveZero(arr , n) ;
     return 0 ;
}