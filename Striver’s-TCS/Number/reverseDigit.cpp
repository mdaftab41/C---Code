#include<bits/stdc++.h>
using namespace std;
int Rev(int n)
{
    int d,rev=0;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    
    return rev;
}
int main()
{
    int n;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    cout<<"The reverse of the given number is: "<<Rev(n);
    return 0;
}