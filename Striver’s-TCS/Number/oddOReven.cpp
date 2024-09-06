#include<bits/stdc++.h>
using namespace std;
 int solve(int n) {
    if ((n & 1) == 0)
      return 0;
    else
      return 1;
  }

  int main() {
    int n = 5;
    if (solve(n) == 0) {
      cout<<n<<" is even.";
    } else {
      cout<<n << " is odd.";
    }
  }