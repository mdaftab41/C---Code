# include <iostream>
using namespace std;

int pow( ){
    int a ,b;
    cout<<"Enter the value of a and b";
   cin >>a >>b;
    int ans=1;
    for(int i=1;i<=b ; i++){
        ans=ans*a;
         
    }
    return ans;
}

int main(){
    
   int ans=pow();
   cout<< "ans is "<<ans<< endl;

}