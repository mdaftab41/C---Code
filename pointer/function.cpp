#include<bits/stdc++.h>
using namespace std;

void print(int *p){
    cout<<"inside print function : "<<*p<<endl;
}

void update(int *p){
   // p=p+1 ;
    //value of address will change here only not in main function
   // cout<<"inside update function : "<<p<<endl ;
    *p=*p+2;
    cout<<"in update function : "<<*p<<endl;
    
}

//funtion to get sum

int getSum(int arr[] , int n){ //same as(int *arr ,int n) both work as pointer
  cout<<endl<<"size of Arr : "<<sizeof(arr)<<endl;
  int sum=0 ;
  for(int i=0 ;i<n ;i++){
    sum+=arr[i] ;
  }
  return sum;
}


int main(){
    int value=10 ;
    int *p=&value ;
    // print(p) ;
    // cout<<"before update in main function : "<<p<<endl; 
    // update(p) ;
    // //we can't change pointer location
    // cout<<"after update in main function : "<<p<<endl;
    // cout<<"we can update the value inside update function : "<<endl;

    cout<<"before updating value in main function : " << *p <<endl;
    update(p) ;
    //we can update the value inside update function 
    // change will also refelected in main function
    cout<<"after updating value  in main function : "<< *p <<endl<<endl<<endl<<endl;
    cout<<"Working with both function and array"<<endl;

    int arr[7] ={4,5,6,1,2,6,7};
    cout<<"Printing sum : "<<getSum(arr , 7)<<endl ;

    return 0 ;
}