# include <bits/stdc++.h>
using namespace std;

//n*n brute force methode
void duplicate(int arr[], int n) {
      int mark[n] ;
      for(int i=0 ; i< n; i++){
        mark[i]=1;
      }
      for (int i = 0; i < n; i++) {

        if (mark[i] == 1) {

          for (int j = i + 1; j < n; j++) {

            if (arr[i] == arr[j]) {

              mark[j] = 0;
            }
          }
        }
      }

      for (int i = 0; i < n; i++) {
        if (mark[i] == 1) {
          cout << arr[i] << ",";
        }
      }
    }



void removeDuplicate( int arr[] , int n){
    unordered_map<int , int> mp;
    for( int i=0 ; i< n ; i++){
        if(mp.find(arr[i])==mp.end()){ //mp.end() return a pointer just outside of map
         cout<<arr[i]<<" " ;
         mp[arr[i]]++ ; //add element to map
        }
    }
}


int main(){
    int n ;
    cout<<"Enter the value of array size "<<endl;
    cin>> n;
    int arr[n] ;
    cout<<"Enter the Element of Array"<<endl;
    for(int i= 0 ; i<n ; i++){
        cin>>arr[i] ;
    }
   
   removeDuplicate(arr , n);
   cout<<"using BruteForce method"<<endl;
   duplicate(arr , n) ;

    return 0;
}