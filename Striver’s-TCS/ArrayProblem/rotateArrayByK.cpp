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

void rotateByK( int arr[] , int n, int k){
     if (n == 0)
        return;
      k = k % n;
     if (k > n)
        return;
    int temp[n] ;
    for( int i=n-k-1 ; i < n ; i++){
        temp[i-n+k+1]=arr[i] ;//starting from temp 0 to k-1
       // cout<<temp[i-n+k+1]<<"  =======" ;
    }
    for( int i= 0 ; i< n-k-1; i++){
        temp[k+i+1]=arr[i] ;
        //cout<<temp[k+i+1]<<"--" ;
    }
    for(int i=0 ; i<n ;i++){
        
        cout<<temp[i]<<" " ;
    }cout<<endl;
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
 int arr1[] = {1, 2, 3, 7, 9, 21,2 8};
rotateByK(arr1 , 7, k) ;
return 0 ;
}