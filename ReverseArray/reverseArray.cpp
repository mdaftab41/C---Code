
# include<iostream>
using namespace std ;

void reverse( int arr[] , int size , int s ,int e){
    
    if(s>=e){
        return ;
    }
     int temp;
        temp =arr[s] ;
        arr[s] = arr[e];
        arr[e] =temp ;
        reverse(arr , size , s+1, e-1) ;
}

int main(){
    int arr[10] ;
    for(int i=0 ; i<10 ; i++){
        cin>>arr[i] ;

    }
    reverse(arr , 10 , 0 , 9) ;
     for(int i =0 ; i<10 ; i++){
        cout<<arr[i] <<" " ;
     }
     return 0 ;
} 