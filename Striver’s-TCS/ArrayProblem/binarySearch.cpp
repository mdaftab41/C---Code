
#include <bits/stdc++.h>
using namespace std ;
int binarySearch( int arr[] , int n , int target){
    int start=0 ;
    int end=n-1 ;
    int mid=start+(end-start)/2 ;
    while(start<=end){
        if(arr[mid] ==target){
            return mid ;
        }else if(target>arr[mid]){
            start=mid+1 ;
        }else{
            end=mid-1 ;
        }
        mid=start+(end-start)/2 ;
    }
    return -1;
}

int main(){
    int n ;
    cout<<"Enter the value of array size "<<endl;
    cin>> n;
    int arr[n] ;
    cout<<"Enter the Element of Array"<<endl;
    for(int i= 0 ; i<n ; i++){
        cin>>arr[i] ;
    }
    
    for(int i= 0 ; i<n ; i++){
        cout<<arr[i] <<"  ";
    }
    cout<<" "<<endl;
    int m ;
   cout<<"Enter the target"<<endl;
   cin>> m;
   int searchElement=binarySearch(arr , n ,m) ;
   cout<<"the position of "<<m <<"  int the array is : " <<searchElement <<endl;
    return 0;
}