#include<bits/stdc++.h>
using namespace std ;

void maxSum( int arr[] , int n){
    int s= 0, start= 0,end= 0 ;
    int sum = 0;
    int maxi = INT_MIN ;
    for( int i= 0 ; i<n ; i++){
        sum = sum+arr[i] ;
        if(sum > maxi){
            maxi = sum ;
            start=s;
            end=i;
        }
        if(sum<0){
            sum=0;
            s=i+1;
        }
    }
    cout<<"MaxiContiArraySum is : "<<maxi<<endl;
    cout<<"Starting index is : "<<start<<endl;
    cout<<"Ending index is : "  << end<<endl;

}

 void printArr( int arr[] , int n){
    for(int i=0 ; i< n ; i++){
        cout<<arr[i] <<" " ;
    }
    cout<<endl ;
}

int main(){
int arr[] ={6,6,-8,-4,2,-5,11,10,-11,-20} ;
int n=10 ;
printArr(arr , n) ;
 maxSum(arr , n);
 
    return 0 ;
}