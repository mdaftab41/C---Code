#include <bits/stdc++.h>
using namespace std;

void swapAlternative( int *arr , int n){
    for( int i=0 ; i<n ; i+=2){
        if(i+1<n){
            swap(arr[i] , arr[i+1]) ;
        }
    }
}
 void print(int arr[] , int n){
    for( int i=0 ; i<n ; i++){
    cout<<arr[i]<<" " ;
}cout<<endl;

 }
int main(){
int n ;
cout<<"Enter the size"<<endl;
cin>>n ;
int arr[n] ;
for( int i=0 ; i<n ; i++){
    cin>>arr[i];
}
cout<<"printing Array before reverse ";
print(arr , n) ;
swapAlternative(arr , n) ;
cout<<"printing Array after reverse " ;
print(arr , n)  ;
    return 0 ;
}