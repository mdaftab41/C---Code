#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main()
{
    int N = 5;
    vector<int> arr(N)  ;
    cout<<"Enter the element "<<endl;
    for(int i=0 ; i<N-1 ; i++){
        cin>>arr[i] ;
    }
    int ans = missingNumber(arr, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
