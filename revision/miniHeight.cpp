# include<bits/stdc++.h>
using namespace std;

void miniHeight( int arr[] , int n , int k){
    int ans;
    sort(arr , arr+n) ;
      
      
     for( int i=1 ; i< n ; i++ ){
         
        
        if((arr[i]-k) <=arr[0]){
            arr[i] = arr[i]+k ;
        }
        else {
            arr[i] = arr[i]-k ;
            }
     }
     arr[0] = arr[0]+k ;
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
int arr[10] = { 2, 4, 3, 9, 9 ,10, 9 ,7 ,1, 2 };
printArr( arr ,10);
miniHeight(arr, 10 ,4 );
printArr( arr , 10);
return 0;
}
