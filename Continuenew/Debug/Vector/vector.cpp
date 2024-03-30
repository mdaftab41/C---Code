#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1={1,3,4,5,6,7,8,9,5,6,6};
    // range looped
    for(const int& i: v1){
        cout<< i <<" ";
    }
    cout<<endl;
    //range looped
    cout<<" using another loop"<<endl;
    for( int i: v1){
        cout<< i<<" "; 
    }
}