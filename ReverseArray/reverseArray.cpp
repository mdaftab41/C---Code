
# include<iostream>
using namespace std ;

void reverse( int arr[] , int size){
    int s=0 ;
    int e=size-1;
    while(s<=e){
        int temp;
        temp =arr[s] ;
        arr[s] = arr[e];
        arr[e] =temp ;
        s++;
        e--;
    }
}

int main(){
    int arr[10] ;
    for(int i=0 ; i<10 ; i++){
        cin>>arr[i] ;

    }
     reverse(arr , 10) ;
     for(int i =0 ; i<10 ; i++){
        cout<<arr[i] <<" " ;
     }
     return 0 ;
} 