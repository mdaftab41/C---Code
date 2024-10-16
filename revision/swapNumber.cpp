#include <iostream>
using namespace std;

int main()
{
    int a=8;
    int b=15;
   /* a=a^b;
    b=a^b;
    a=a^b ; 
    */
    a=a+b;
    b=a-b;
    a=a-b ;
    cout<<a<<" "<<b<<endl;

    return 0;
}