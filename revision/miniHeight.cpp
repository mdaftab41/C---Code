# include<bits/stdc++.h>
using namespace std;

void miniHeight( int arr[] , int n , int k){
    sort(arr , arr+n) ;
      int mini=arr[0]-k;
      int maxi=arr[n-1]+k;
      int ans=arr[n-1] - arr[0] ;
     
     for( int i=1 ; i< n ; i++ ){
         
        
        if((arr[i]-k) <=0){
        continue;
    
        }
     
      maxi=max(arr[n-1]-k , arr[i-1]+k);
      mini=min(arr[0]+k , arr[i] - k);
      ans=min(ans ,maxi-mini);
     }
     cout<<"mini Height is : "<< ans <<" between " << arr[0]<<" and " <<arr[n-1] <<endl ;
}
void printArr(int arr[] , int size){
    for( int i= 0 ; i< size ; i++){
        cout<<arr[i] <<"  " ;
    }cout<<endl ;
}

int main(){
int arr[10] = { 2, 4, 3, 9, 9 ,10, 9 ,7 ,1, 2 };
printArr( arr ,10);
miniHeight(arr, 10 ,4 );
printArr( arr , 10);
return 0;
}
