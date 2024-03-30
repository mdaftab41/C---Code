# include <iostream>
using namespace std;
//Even--->1
//odd --->0
bool isEven(int a){
    if(a&1){//odd
        return 0;
    }
    return 1;//Even
     
}

int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(isEven(num)){
        cout<<num <<"  " <<"is Even"<<endl;
    }
    else
    {
        cout<<num <<"  " <<"is odd"<<endl;
        }

}