#include<bits/stdc++.h>
using namespace std;

bool LinearSearch( int arr[], int key , int n){
    for( int i= 0 ; i<n ; i++){
        if(arr[i]==key){
            return true;
        }  
    }
    return false ;  
}

int main(){
 int n;
 int key;
 
 cout<<"Enter the value of key"<<endl;

 cin>>key;
 cout<<"Enter size of array"<<endl;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
 bool found=LinearSearch(arr , key, n);
 if(found){
    cout<<"Element is found"<<endl;
 }
 else cout<<"Element is not found"<<endl;

    return 0;
}