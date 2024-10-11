#include <bits/stdc++.h>
using namespace std ;

void merge(vector<int>&arr , int s , int e , int mid){
    vector<int>temp ;
    int left=s ;
    int right=mid+1 ;
    while(left<=mid && right<=e){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]) ;
            left++;
        }else{
            temp.push_back(arr[right]) ;
            right++;
        }
    }
    while(left<=mid){
         temp.push_back(arr[left]) ;
         left++;
    }
    while(right<=e){
         temp.push_back(arr[right]) ;
         right++;
    }
  for( int i= 0 ; i<temp.size() ; i++){
    arr[s+i] =temp[i] ;
  }
}

void mergeSort( vector<int>&arr , int s , int e ){
    if(s>=e) return;
    int mid=s+(e-s)/2;
    mergeSort(arr ,s , mid ) ;
    mergeSort(arr , mid+1 ,e) ;
    merge(arr , s ,e , mid) ;
}

int main(){
    int n ;
    cout<<"Enter the element of the array "<<endl ;
    cin>>n ;
    vector<int> arr(n) ;
    for( int i=0 ; i<n ; i++){
        cin>>arr[i] ;
    }
    cout<<"Array before the short"<<endl;

     for( int i=0 ; i<n ; i++){
        cout<<arr[i]<<" "  ;
    }
    cout<<endl<<"Array After the short"<<endl;

    mergeSort(arr , 0 , n-1) ;
    
     for( int i=0 ; i<n ; i++){
        cout<<arr[i]<<" " ;
    }
    return 0;

}