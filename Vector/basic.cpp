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

    for(auto it =v.begin() ; it <v.end(); it++){
        cout<<*it<<endl ;
    }
    return 0 ;
}