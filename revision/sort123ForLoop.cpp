# include <iostream>
using namespace std;

void sort012( int arr[] , int n){
    int s=0 , c0=0 ,c1=0 , c2=0 ;
    for( int i=0 ; i<n ; i++){
       if(arr[i] == 0){
        c0++;
       }
       else  if(arr[i] == 1){
        c1++;
       }else{
        c2++;
       }
    }
    for( int i=0; i<c0 ; i++){
        arr[s++]=0;
    }
    for( int i=0; i<c1 ; i++){
        arr[s++]=1;
    }
    for( int i=0; i<c2 ; i++){
        arr[s++]=2;
    }
}

 void printArr( int arr[] , int n){
    for(int i=0 ; i< n ; i++){
        cout<<arr[i] <<" " ;
    }
    cout<<endl ;
}

int main(){
int arr[] ={1,2,2,0,2,0,1,0,1,0} ;
int n=10 ;
sort012(arr ,n) ;
printArr(arr , n) ;
    return 0 ;
}