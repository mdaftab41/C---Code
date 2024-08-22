#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={5,3,6,7,8,13,15};
    //name of Array store the Address of first location of array
    cout<<"Address of first location of array"<<arr<<endl ;
    cout<<"Address of first location of array"<<&arr[0]<<endl ;
    cout<<"First element of array is : "<<*arr<<endl ;
    cout<<"First element of array is : "<<arr[0]<<endl ;
    return 0;
}