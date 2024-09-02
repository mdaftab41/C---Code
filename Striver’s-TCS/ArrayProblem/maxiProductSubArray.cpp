#include <bits/stdc++.h>
using namespace std;

int maxiProduct( int arr[] , int n){
    int prod1=arr[0], prod2=arr[0] , result=arr[0];
    for( int i=1 ;i<n ;i++){
        int temp = max({arr[i] , prod1*arr[i] ,prod2*arr[i]});
        prod2 = min({arr[i] , prod1*arr[i] ,prod2*arr[i]});
        prod1=temp ;
        result=max(result , prod1) ;
    }
    return result ;
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
        cout<<arr[i]<<" " ;
    }
   cout<<endl ;
   int product=maxiProduct(arr , n);
   cout<<"Maximum product of continuous subArray : "<<product<<endl ;
    

    return 0;
}
