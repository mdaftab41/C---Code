#include<iostream>
# include <vector>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the size of vector" <<endl;
    cin>> n ;
    vector<int>v(n);
    for( int i = 0 ; i< n ; i++){
        cin>>v[i] ;
    }
  cout<<"vector using the auto loop "<< endl ;
    for(auto it =v.begin() ; it <v.end(); it++){
        cout<<*it<<endl ;
    }
    cout<<" vector using for loop"<<endl ;
    for(int i = 0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
    return 0 ;
}