#include <iostream>
using namespace std;
// Function to find sum of G.P. series
float SumofGP(float a, float r, int n)
{
  float sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + a;
    a = a * r;
  }
  return sum;
}
int main()
{
  float a = 2;     // First Term of G.P.
  float r = 1.5; // Common Ration of G.P.
  int n = 4;     // Number of terms in a G.P.
  cout << "Sum of GP Series is "<<SumofGP(a, r, n);
  return 0;
}