#include<bits/stdc++.h>
using namespace std ;

void maxSum( int arr[] , int n){
    int s=0, start=0,end=0 ;
    int sum=0;
    int maxi=INT_MIN ;
    for( int i= 0 ; i<n ; i++){
        sum=sum+arr[i] ;
        if(sum > maxi){
            maxi=sum ;