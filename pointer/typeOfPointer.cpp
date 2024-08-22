#include<bits/stdc++.h>
using namespace std;

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
    return 0;
}