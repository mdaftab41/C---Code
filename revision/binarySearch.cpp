# include<iostream>
using namespace std ;


int binarSearch( int arr[] , int size , int key ){
    int start = 0 ;
    int end = size-1;
    int mid = start+(end-start)/2 ;
    while(start<= end){
        if(arr[mid] == key){
            return mid ;
        }
        else if(arr[mid] > key) {
           start= mid+1 ; 
        }
        else{
            end= mid-1;
        }
         mid = start+(end-start)/2 ;
    }

   return -1;
}
 

int main(){
 int arr[10] ={3,5 ,12,34,54,6,17,10,16} ;
 int key = 54 ;
 int index = binarSearch(arr ,10 ,key);
 cout<<"Index of "<< key <<" is :"<<" " << index <<endl;
 return 0;
}