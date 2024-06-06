# include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return n ;
    }
    int first= fib(n-1);
    int second=fib(n-2);
    int result = first +second;
    return result ;
}

int main(){
    int n ;
    cout<<" Enter the no of term "<< endl;
    cin>> n ;
    cout<<fib(n)<<endl;

}