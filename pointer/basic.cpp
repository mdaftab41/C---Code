#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=15;
    int *ptr=&num ;
    cout<<"Address of p is : "<<ptr<<endl;
    cout<<"value at p is : "<<*ptr<<endl;
    return 0;
}