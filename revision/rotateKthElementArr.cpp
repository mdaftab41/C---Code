# include <bits/stdc++.h>
using namespace std;

// rotate k element to right
 void rotateArr(int arr[], int n, int k)
{
    // Adjust k if it is greater than the length of the array
    k = k % n;
    
    // Reverse the entire array
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    // Reverse the first k elements
    for (int i = 0, j = k - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    // Reverse the remaining n - k elements
    for (int i = k, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}


void printArr( int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i] <<" " ;
    }cout<<endl ;
}

int main(){
 int arr[]={4,5,6,7,8,9,10};
 int n=7 ;
 int k ;
 cout<<"How many Element rotate" <<endl ;
 cin>> k ;
 rotateArr(arr , n ,k) ;
 printArr( arr , n);

}