#include<bits/stdc++.h>
using namespace std;


void reverse(int *arr , int start ,int end){
    while (start<=end)
    {
         swap(arr[start++] , arr[end--]);
    }
    
}

void rotateArray( int *arr, int n, int k){
    //Reverse the first 0 to k-1 element 
      reverse(arr , 0 , k-1) ;
      // Reverse the K to n-1 element 
      reverse(arr ,k ,n-1) ;
     //Reverse the complete  array 
     
      reverse(arr , 0 ,n-1) ;
    for(int i=0 ; i<n ;i++){
        cout<<arr[i] <<" " ;
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>> n ;
    int arr[n] ;
    cout<<"Enter the element of Array "<<endl;
    for(int i=0;i<n ;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the number to rotate the Array"<<endl;
    cin>>k ;
rotateArray(arr ,n,k) ;
return 0 ;
}