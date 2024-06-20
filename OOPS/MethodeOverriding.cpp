
# include<iostream>
using namespace std;

class parent{
    public:
    int a,b;
    void Add(int a, int b){
        cout<<" parents function call"<<endl;
     cout<<"sum is :"<<a+b<<endl;
    }
};

class child: public parent{
    public:
    void Add( int a ,int b){ //own function implementation 
        cout<<"Chid function  is call"<<endl;
        cout<<"Subtraction is : "<< a-b<<endl;
    }
};

int main(){
    child obj;
    obj.Add(10 ,5);

    return 0 ;
}