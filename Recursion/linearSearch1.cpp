#include <bits/stdc++.h>
using namespace std;

bool linearSearch( int arr[] , int key , int size){
    if(size==0){
        return false ;
    }
    if(arr[0] == key){
        return true ;
    }
    return linearSearch(arr+1 , key , size-1) ;
}


//function return index of element 
int search1(int arr[], int n, int x ,int cnt) {
    
    if(n==0){
        return -1 ;
    }
    if(arr[0]==x){
        return cnt ;
    }
    return search1(arr+1 , n-1 , x ,cnt+1) ;
     
}
int search(int arr[], int n, int x) {
    int cnt=0;
    return search1(arr , n, x ,cnt) ;
     
}


int main(){
    int n , key ;
    cout<<"Enter the size of array"<<endl;
    cin>>n ;
    int arr[n];
    cout<<"Enter the Element of Array "<<endl;
    for( int i=0 ; i<n ; i++){
        cin>>arr[i] ;
    }
    cout<<"Enter the key"<<endl;
    cin>>key;
    if(linearSearch(arr ,key ,n)){
        cout<<"Key found in Array" <<endl ;
    }else{
         cout<<"Key Not found in Array" <<endl ;
    }

    
    int index =search(arr ,n , key) ;
    cout<<"Index of Element :  " <<index<<endl;
    return 0 ;
}