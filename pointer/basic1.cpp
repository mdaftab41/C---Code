#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=15 ;
    cout<<"value of num before increment : "<<num<<endl ;
    int*ptr=0 ;
    ptr=&num ;
    // if increment the *ptr++ it increse the address not the value
    (*ptr)++ ;
     num++ ;
    cout<<"value of ptr after increment : "<<*ptr<<endl;
    num++ ;
    cout<<"value of num after increment : "<<num<<endl ;
    cout<<"value of ptr after increment : "<<*ptr<<endl;
    // but if cpoy the number into another number then increment that variable then it not effect hte original variavle
    int q=num ;
     cout<<"The value of q before is : "<<q <<endl;
    q++;
    //the the increment of the q does not effect the value of num and ptr
    cout<<"The value of q after is : "<<q <<endl;
    cout<<"the increment of the q does not effect the value of num and ptr"<<endl;
    cout<<"value of num after increment of q : "<<num<<endl ;
    cout<<"value of ptr after increment of q: "<<*ptr<<endl;
    //copy the pointer 
    cout<<"concept of how to copy the pointer"<<endl ;
    int *ptr2=ptr ;
    cout<<ptr<<"--->"<<ptr2<<endl;
    cout<<*ptr<<"--->"<<*ptr2<<endl;
return 0;
}