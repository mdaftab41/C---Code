#include<bits/stdc++.h>
using namespace std;

void print(int *p){
    cout<<"inside print function : "<<*p<<endl;
}

void update(int *p){
    p=p+1 ;
    //value of address will change here only not in main function
    cout<<"inside update function : "<<p<<endl ;
}
int main(){
    int value=10 ;
    int *p=&value ;
    print(p) ;
    cout<<"before update in main function : "<<p<<endl;
    update(p) ;
    //we can't change pointer location
    cout<<"after update in main function : "<<p<<endl;

    return 0 ;
}