#include <bits/stdc++.h>
using namespace std;

float findMedian(int arr[] , int n ){
     
    cout<< n<<"size"<<endl;
    sort(arr ,arr+n) ;
    float median ;
    int m=n/2 ;
    if(n%2==0){
       median=(arr[m-1]+arr[m])/2.0 ;
    }else{
        median=arr[m];
    }
    return median ;
}

int main(){
    
    int arr[8] ;
    cout<<"Enter the element of array"<<endl;
    for(int i=0 ; i< 8; i++){
        cin>>arr[i] ;
    }
   int n = sizeof(arr)/sizeof(arr[0]) ;
    float result =findMedian(arr , n);
    cout<<"Median of Array is : "<<result<<endl ;
    return 0;
}