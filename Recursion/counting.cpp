#include<iostream>
using namespace std;

void print(int n){
    if(n == 0)
       return ;
   
   // recursive relation
   print(n-1) ;
    cout<<n<<endl;
}

 int main() {
    int n ;
    cout<<" enter the number" ;
    cin>> n ;
    cout<<endl;
    print(n);
    return 0;
}