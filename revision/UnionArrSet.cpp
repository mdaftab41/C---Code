# include <bits/stdc++.h>
using namespace std ;

void arrUnion(int arr1[] , int arr2[] , int n , int m){
    set<int> s;
    for( int i= 0 ; i<n ; i++){
        s.insert(arr1[i]);
    }
   for( int i=0; i<m ; i++){
    s.insert(arr2[i]);
   }
    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << " ";
}
 

int main(){

     int arr1[] = {2,4,6,7};
     int arr2[] ={8,9,0,2,5,6,5,4};
     int m=8;
     int n=4;
     cout<<" union of array"<<endl;
     arrUnion(arr1 ,arr2 , n , m) ;
    return 0;
}