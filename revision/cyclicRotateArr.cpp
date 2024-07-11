# include <bits/stdc++.h>
using namespace std;
void rotateArr( int arr[] , int n){
    int s=0;
    int e=n-1 ;
    while(s<e){
        swap(arr[s++] , arr[e]);
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
 rotateArr(arr , n) ;
 printArr( arr , n);

}