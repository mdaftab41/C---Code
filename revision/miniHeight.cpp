# include<bits/stdc++.h>
using namespace std;

void miniHeight( int arr[] , int n , int k){
    int ans;
     arr[0] = arr[0]+k ;
      
     for( int i=1 ; i< n ; i++ ){
         
        
        if((arr[i]-k) <=arr[0]){
            arr[i] = arr[i]+k ;
        }
        else {
            arr[i] = arr[i]-k ;
            }
     }
      sort(arr , arr+n) ;
     ans =arr[n-1]-arr[0] ;
     cout<<"mini Height is : "<< ans <<" between " << arr[0]<<" and " <<arr[n-1] <<endl ;
}
void printArr(int arr[] , int size){
    for( int i= 0 ; i< size ; i++){
        cout<<arr[i] <<"  " ;
    }cout<<endl ;
}

int main(){
int arr[6] = { 7, 7,3,4 };
printArr( arr ,4);
miniHeight(arr, 4 ,1 );
printArr( arr , 4);
return 0;
}
