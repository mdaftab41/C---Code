#include<iostream>
using namespace std;
int main(){
    int arr[4][4] ;
    int sum ;
    cout<<" printing the element of the array"<<endl ;
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            cin>>arr[i][j] ;
        }
    }
    cout<<"Printing the sum "<<endl ;
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl ;
    }
    cout<<"rpinting Row Wise sum "<<endl;
    for(int i=0 ; i<4 ; i++){
        sum =0 ;
        for(int j=0 ; j<4 ; j++){
            sum+=arr[i][j];
        }
        cout<< sum<<endl ;
    }
}