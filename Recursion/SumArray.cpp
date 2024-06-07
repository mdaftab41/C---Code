# include<iostream>
using namespace std;

int  sumArray( int arr[] , int size){
     
    if(size==0){
        return 0;
    }
    else{
        int sum =arr[0];
        sum=sum+sumArray(arr +1, size-1);
          
        return sum ;
       
    }
}

int main(){
    cout<<" sum is";
    int arr[4]={5,5,5,5};
    int n =4;
    int result = sumArray(arr , n);
    cout<< result <<endl ;
    return 0;
}