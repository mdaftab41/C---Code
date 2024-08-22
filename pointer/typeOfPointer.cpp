#include<bits/stdc++.h>
using namespace std;

int * fun() {
    int x = 10;
    return &x;
}

int main(){
    // Null Pointer 
    int * ptr = NULL;
    cout << "The value of ptr is " << ptr<<endl;
    //Double pointer 
    int a = 10;
    int *p = &a; 
    int **q = &p;
    cout<<"concept of double pointer "<<endl;
    cout<<"Address of A point by p : "<<p<<endl;
    cout<<"Address of P piont by double pointer q: "<<q<<endl;
    cout<<"All three store the same value"<<endl;
    cout<<"value of a :"<<a<<"-->"<<*p<<" -->"<<**q<<endl ;
    //void pointer
    cout<<"concept of void pointer"<<endl;
    void * pt;
    int i = 10;
    // assign int address to void
    pt = & i;
    cout << "Address of variable i " << & i << endl;
    cout << "Address where the void pointer is pointing " << pt <<  endl;
    //wild pointer 
    cout<<"concept of wild pointer"<<endl ;
    int * r; /* wild pointer */
    int d = 10;
    r = & d; /* r is not a wild pointer now*/
    cout<< " original Value of d is : "<<*r<<endl;
    *r = 12; /* This is fine. Value of d is changed */
    cout<<" Value of d is changed : "<<*r<<endl;
    cout<<"concept of Dangling pointer"<<endl;
     int * m = fun();
    // p points to something which is not 
    // valid anymore 
     cout << * m;
    return 0;
}