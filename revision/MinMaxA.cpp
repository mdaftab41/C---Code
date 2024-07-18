#include <bits/stdc++.h>
using namespace std ;

int getMax( int arr[] , int size){
    int maxi = INT_MIN ;
    for( int i = 0 ; i < size ; i++){
        if(maxi < arr[i]){
            maxi = arr[i] ;
        }
    }
    return maxi ;
}

int getMin( int arr[] , int size){
    int mini = INT_MAX ;
    for (int i = 0; i < size; i++)
    {
         if(arr[i] < mini){
            mini = arr[i] ;
         }
    }
    return mini ;
}

void printArr(int arr[] , int size){
    for( int i= 0 ; i< size ; i++){
        cout<<arr[i] <<"  " ;
    }cout<<endl ;
}

int main(){
int arr[8] ={5,6,7,40,71,91,3,8} ;
printArr( arr , 6);
int maxiElement = getMax(arr , 8) ;
int minElement = getMin(arr , 8) ;
cout<<"Maxi Element is :"<<maxiElement <<endl;
cout<<"Min Element is : " <<minElement <<endl ;

return 0;
}


 