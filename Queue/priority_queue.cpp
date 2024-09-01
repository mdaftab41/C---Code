#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={9,3, 4,12,7,6,17,23,11,13};
    priority_queue<int>pq;
    for(int i=0 ; i<10 ; i++){
        pq.push(arr[i]) ;
    }
    cout<<"1rst Maximum element of Array is : " <<pq.top()<<endl;
    pq.pop();//pop first largest 
    cout<<"2nd Maximum element of Array is : " <<pq.top()<<endl;
    pq.pop();//pop 2nd largest 
   cout<<"3rd Maximum element of Array is : " <<pq.top()<<endl;
   while(pq.empty()!=true){
    cout<<pq.top()<<" " ;
    pq.pop() ;
   }
    return 0 ;
}