#include <bits/stdc++.h>
using namespace std;
// float sumofAp(float a, float d, int n)
// {
//     float sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += a;
//         a += d;
//     }
//     return sum;
// }

// function using Direct formula 
float sumofAp(float a, float d, int n)
{
     float sum = (n / 2.0) * (2.0 * a + (n - 1) * d);
    return sum;

}
int main()
{
    float a = 1.5, d = 3;
    int n = 5;
    cout << "Sum of Given Ap Series: " << sumofAp(a, d, n) << endl;
}