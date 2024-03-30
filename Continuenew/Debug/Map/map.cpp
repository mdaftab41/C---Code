#include <bits/stdc++.h>
using namespace std;
void print( map<int , string> &m){
    cout<<"size of map: "<<m.size()<<endl;
    for(auto &pr:m){
        cout<<pr.first<<" - ->  "<<pr.second<<endl;
    }
}

int main(){
    // unique key are store , we can't stroe duplicate value , store value in sorted manner
 map<int ,string> m;
 m[1]="alam";  //o(log(n))
 m[2]="vinod";
 m[3]="raju";
 m[4]="kamal";
 m.insert({6,"vivek"});
 m.insert({5,"parshant"});
 m.insert({5,"parshant malik"});// can't store duolicate value
 cout<<"before erase operation"<<endl;
 
 print(m);
 auto it = m.find(3);// return an iterator to 3rd index o(log(n))
 if(it==m.end()){
    cout<<"no value find";
 }else{
    cout<<"Element found: "<<(*it).first<<" -->"<<(*it).second<<endl;
 }
 if(it!=m.end()){
    m.erase(it);
 }

 //function call for print the map
 cout<<"After erase function call"<<endl;
 print(m);



     
}