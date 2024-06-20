#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"without argument function call"<<endl<<endl;
        cout<<"Hello Md aftab Alam"<<endl<<endl;
    }

    void sayHello(string name){
        cout<<"function With argument is call"<<endl<<endl;
        cout<<"Hello "<<name<<endl<<endl;
    }
};
int main(){

    A obj1;
    obj1.sayHello();
    obj1.sayHello("md aftab alam");
}