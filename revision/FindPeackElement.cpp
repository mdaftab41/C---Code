# include <iostream>
using namespace std;

int findPeackElement( int arr[] , int size , int s , int e){
    int mid = s+(e-s)/2 ;

    if((mid==0 || arr[mid] >= arr[mid-1]) && ( mid== size -1 || arr[mid] >= arr[mid+1])){
        return arr[mid];
    }
    else if( arr[mid] < arr[mid+1]){
        return findPeackElement( arr , size,  mid+1 ,e );
    }
    else{
       return findPeackElement( arr , size, s , mid-1 ) ;
    }
}
int main(){
 int arr[] ={10 ,21,45,61,77,23,42,41} ;
  int size =8 ;
  int peak = findPeackElement(arr , size , 0 , size -1) ;
  cout<<" The peak Element is : " << peak <<endl ;
    return 0 ;
}