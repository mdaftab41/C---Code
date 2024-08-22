#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={5,3,16,7,8,13,15,17,18,10};
    //name of Array store the Address of first location of array
    cout<<"Address of first location of array"<<arr<<endl ;
    cout<<"Address of first location of array"<<&arr[0]<<endl ;
    cout<<"First element of array is : "<<*arr<<endl ;
    cout<<"First element of array is : "<<arr[0]<<endl ;
    cout<<"2nd value is : "<<*(arr+1)<<endl ;
    cout<<"3rd value is : "<<*(arr+2)<<endl ;
    cout<<"5+1 is : "<<*arr+1<<endl ;
    cout<<"5+1 is : "<<*(arr)+1<<endl ;
    for(int i=0 ;i<10 ; i++){
        //cout<<i<<" Element of array is : "<<*(arr+i)<<endl;
        cout<<i<<" Element of array is : "<<i[arr]<<endl;
    }
    return 0;
}