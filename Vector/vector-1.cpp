# include <iostream>
# include <vector>
#include <algorithm> 
using namespace std; 

int main(){
    vector<int> v ;
    v.push_back(5) ;
    v.push_back(80) ;
    v.push_back(70) ;
    v[0] =10 ;
    v.insert(v.begin()+1 ,50);
    cout<<v[1] <<endl;
    v.erase(v.begin()+1 );
    cout<<v[1] <<endl;
    cout<<v[0]<<endl ;
    v.push_back(6) ;
    v.push_back(30) ;
    v.push_back(20) ;
    v.push_back(10) ;
    cout<<"Display the fornt and Back Element : "<<endl ;
    cout<<"front Element : " <<v.front() <<endl ;
    cout<<"Back Element : " <<v.back() <<endl ;
    cout<<"now we using the auto loop to display vector"<<endl ;
    for(auto i : v){
        cout<< i<< " " ;
    }
    cout<<endl;
   sort(v.begin(),v.end());
    cout<<"display sorted  vector"<<endl ;
    for(auto i : v){
        cout<< i<< " " ;
    }
    return 0 ;
}