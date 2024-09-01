#include <bits/stdc++.h>
using namespace std;


// This code is only work for shoted Array

int removeDuplicate(int arr[] , int n){
    int i=0 ;
    for( int j=1; j<n ; j++){
        if(arr[i]!=arr[j]){
            i++ ;
            arr[i]=arr[j] ;
        }
    }
    return i+1 ;//returing size of new array 
}

//remove duplicate from array using set / map 
void removeDuplicateFromArray(int *arr , int n){
    set<int>s ;
    for( int i =0 ; i<n ; i++){
        s.insert(arr[i]) ;
    }
    for(auto i: s){
        cout<<i <<" " ;
    }
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
   cout<<"using two pointer "<<endl;
    int size=removeDuplicate(arr ,n) ;
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl;
   cout<<"using set STL "<<endl;
    removeDuplicateFromArray(arr , n) ;
    return 0 ;
}