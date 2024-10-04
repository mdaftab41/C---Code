# include <iostream>
using namespace std;
int factorial(int n){
    //base case 
    if(n==1)
       return 1;
   // recursive relation    
  return n*factorial(n-1);
}


int main(){
    int m;
    cin>> m;
    cout<<"Recursion Call"<<endl;
    int ans=factorial(n);
    cout<<ans<<endl;
    return 0;


}