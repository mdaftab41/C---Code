#include <iostream>
using namespace std;

void arrangeNeg(int arr[] , int n){
    int s=0;
    int e= n-1;
    int temp=0;
    while(temp<=e){
        if(arr[temp] <0){
            swap( arr[temp++] , arr[s++]);
        }
        else{
            temp++;
        }
    }
    cout<<"arrange Negatine No"<<endl;
  }
 void printArr( int arr[] , int n){
    for(int i=0 ; i< n ; i++){
        cout<<arr[i] <<" " ;
    }
    cout<<endl ;
}

int main(){
int arr[] ={6,8,-8,-4,2,-5,-11,10,-11,-20} ;
int n=10 ;
printArr(arr , n) ;
arrangeNeg(arr , n);
printArr(arr , n) ;
    return 0 ;
}