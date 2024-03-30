#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int , int> m;
    int n;
    cin >> n;
    for( int i=0; i<n;i++){
        int s;
        cin >> s;
        //m[s]=m[s]+1;
        m[s]++;
    }
    for( auto & vl: m){
        cout<<vl.first<<"  --->  "<<vl.second<<endl;
    }
    cout<<" hello";
}
