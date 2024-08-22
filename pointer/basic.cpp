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
    return 0;
}