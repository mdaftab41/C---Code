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

    cout<<"Creating in Array "<<endl;
    int temp[10]={12,41,31,51,78,96,65,45,61,91};
    cout<<"size of array is : "<<sizeof(temp)<<endl;
    cout<<"size of array is : "<<sizeof(&temp)<<endl;
    cout<<"size of first element of array is : "<<sizeof(*temp)<<endl;
    int *ptr=&temp[0] ;
    cout<<"size of pointer is : "<<sizeof(ptr)<<endl;
    cout<<"size of pointer's value is : "<<sizeof(*ptr)<<endl;
    cout<<"size of address of pointer is : "<<sizeof(&ptr)<<endl;
    cout<<"Address of array is : "<<&temp[0]<<endl;
    cout<<"Address of array is : "<<ptr<<endl;
    cout<<"Address of array is : "<<*ptr<<endl;//value print kar raha hai
    cout<<"Address of array is : "<<&ptr<<endl;
    
    cout<<"you can't change the content of symbol table"<<endl;

    cout<<"creating new array "<<endl;
    int array[5]={15,52,43,34,23};
    cout<<"address of array is : "<<&array[0]<<endl;
    //its give array but we do same thing in pointer 
   // array=array+1;
   // cout<<"address of array is : "<<&array[0]<<endl;
   int *qtr=array ;
   cout<<"address of pointer is : "<<qtr<<endl;
   qtr=qtr+1;
   cout<<"address of pointer+1 is : "<<qtr<<endl;




    return 0;
}