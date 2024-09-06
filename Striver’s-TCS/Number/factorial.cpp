#include <iostream>
using namespace std;

// factorial using Recursion 
int factorialRec(int n){
   
   // Base Condition.
   if(n == 0)
   {
       return 1;
   }

   // Problem broken down into 2 parts and then combined.
   return n * factorialRec(n-1);

}




int factorial(int X) {
   int ans = 1;
   for (int i = 1; i <= X; i++) {
      ans = ans * i;
   }
   return ans;
}
int main() {
   int x ;
   cout<<"Enter the value of x "<<endl;
   cin>>x ;
   int result = factorial(x);
   int result1=factorialRec(x);
   cout << "The factorial of "<<x<<" is "  << result<<endl;
   cout<<"factorial using recursion"<<endl;
    cout << "The factorial of "<<x<<" is "  << result1;
   
}