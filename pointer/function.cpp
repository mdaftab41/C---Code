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
    cout<<"after updating value  in main function : "<< *p <<endl;

    return 0 ;
}