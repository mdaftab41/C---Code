# include <iostream>
using namespace std;
//prime--->1
//not Prime--->0
bool isPrime(int n){
  for(int i=2;i<n; i++){
        if(n%2==0){ 
        return 0;
    }
     
    }
    return 1;// isPrime
     
}

int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(isPrime(num)){
        cout<<num <<"  " <<"is Prime"<<endl;
    }
    else
    {
        cout<<num <<"  " <<"not a Prime Number"<<endl;
        }

}