#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[] , int size){
    if(size==0 || size==1){
        return true ;
    }
    if(arr[0] > arr[1]){
        return false ;
    }
    return isSorted(arr+1 , size-1) ;
}

int main(){
int n ;
cout<<"Enter the size of Arrry "<<endl ;
cin>> n ;
int arr[n] ;
cout<<"Enter the Element of Array"<<endl;
for( int i=0 ; i<n ; i++){
    cin>>arr[i] ;
}
if(isSorted(arr , n)){
    cout<<"Array is Sorted "<<endl;
}else{
    cout<<"Array is Not Sorted "<<endl;
}

return 0 ;
}