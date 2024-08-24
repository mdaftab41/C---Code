#include <bits/stdc++.h>
using namespace std;

void update(int **q){
  //  q=q+1;//no change ;
    **q=**q+1 ;
}


int main(){
 int a=9;
 int*p =&a ;
 int **q=&p;
 cout<<"All three (a ,*p ,**q) print the same value "<<endl;
 cout<<a<<"->"<<*p<<"-->"<<**q<<endl;
 cout<<"Address of all three"<<endl;
 cout<<&a<<"-->"<<p<<"-->"<<&p<<"-->"<<q<<"-->"<<&q<<endl;
 cout<<endl<<endl<<" working on function"<<endl<<endl;
//  cout<<"q before update "<<q<<endl;
//  update(q) ;
//  cout<<"q after update "<<q<<endl;
 cout<<"q before update "<<**q<<endl;
 update(q) ;
 cout<<"q after update "<<**q<<endl;

 return 0;
}