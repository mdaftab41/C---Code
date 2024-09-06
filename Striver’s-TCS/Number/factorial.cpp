#include <iostream>
using namespace std;
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
   cout << "The factorial of "<<x<<" is "  << result;
}