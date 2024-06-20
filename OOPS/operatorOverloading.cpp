#include<iostream>
using namespace std;

class B{
    public:
    int a;
    void operator+( B obj ){
        int val1= this->a ;
        int val2 =obj.a;
        cout<<"Subtraction of two number is :"<< val1-val2<<endl;
    }
};

int main(){
     

    B obj1,obj2;
    obj1.a = 10;
    obj2.a = 3;
    obj1+obj2;
return 0;
}