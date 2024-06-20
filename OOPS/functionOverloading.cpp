#include<iostream>
using namespace std;

class sumOverload{
    public:
    int sum(int num1, int num2){
        cout<<"function with two parameter is call"<<endl <<endl;
        int sum=num1+num2;
        return sum ;
    }

    int sum(int num1 , int num2 , int num3){
         cout<<"function with three parameter is call"<<endl <<endl;
        int sum = num1+num2+num3;
        return sum;
    }
};

int main(){
    int a =5 ,b =10 ,c =15;
    sumOverload obj;
    cout<<obj.sum(a ,b)<<endl<<endl;
    cout<<obj.sum(a,b,c)<<endl <<endl;

}