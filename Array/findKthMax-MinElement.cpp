#include<bits/stdc++.h>
using namespace std ;

void findMaxMin(vector<int>ans , int k){
    int maxi=ans[0] ;
    for(int i=1; i<ans.size() ; i++){
        if(ans[i]>maxi){
            maxi=ans[i] ;
        }
    }
vector<int>hash(maxi+1 , 0) ;
for(int i=0 ; i<ans.size() ; i++){
    hash[ans[i]]++ ;
}
int cnt=0 ;
for(int i=0 ; i<maxi ; i++){
 cnt+=hash[i] ;
 if(cnt>=k){
    cout<<"Minimum Kth element is : "<< i <<endl;
    break;
 }
}
int cnt2=0 ;
for(int i=maxi ; i>=0 ; i--){
 cnt2+=hash[i] ;
 if(cnt2>=k){
    cout<<"Maximaum Kth element is : "<< i <<endl;
    break ;
 }
}

}

int main(){
int n;
 int k;
 
 cout<<"Enter the value of k"<<endl;

 cin>>k;
 cout<<"Enter size of array"<<endl;
 cin>>n;
 cout<<"Enter the Element of Array "<<endl;
  vector<int>arr(n);
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
findMaxMin(arr ,k) ;
    return 0 ;
}