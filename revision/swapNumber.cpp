#include <iostream>
using namespace std;

int main()
{
    int a=8;
    int b=15;
  /*  a=a^b;
    b=a^b;
    a=a^b ; 
    */
    
    a=a+b;
    b=a-b;
    a=a-b ;
    cout<<"a = "<<a<<" "<<"b = " <<b<<endl;

    return 0;
}