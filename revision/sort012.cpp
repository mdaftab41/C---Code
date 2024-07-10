#include <iostream>
using namespace std ;

void sort012( int arr[] , int n){
    int s=0;
    int temp = 0 ;
    int end =n-1 ;
    while (temp<=end)
    {
         switch (arr[temp])
         {
         case 0:
            swap(arr[s] , arr[temp]);
            s++;
            temp++;
            break;
         
         case 1:
         temp++;
            break;
        case 2:
        swap(arr[temp] , arr[end]);
        end--;
        break;
         }
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