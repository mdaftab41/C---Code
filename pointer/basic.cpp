#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=15;
    int *ptr=&num ;
    cout<<"Address of p is : "<<ptr<<endl;
    cout<<"value at p is : "<<*ptr<<endl;

    double d=12.6 ;
    double *dPtr=&d;
    cout<<"Address of p is : "<<dPtr<<endl;
    cout<<"value at p is : "<<*dPtr<<endl;
    cout<<"working on size"<<endl;
    cout<<"size of integer is : "<<sizeof(num)<<endl;
    cout<<"size of pointer is : "<<sizeof(ptr)<<endl;
    cout<<"size of double is : "<<sizeof(d)<<endl;
    cout<<"size of double-pointer is : "<<sizeof(dPtr)<<endl;
    return 0;
}