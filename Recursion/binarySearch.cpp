# include<iostream>
using namespace std;
bool binarySearch( int arr[], int s , int e , int k ){
    if(e<s){
        return false ;
    }

    int mid= (s+e)/2;

    if(k==arr[mid]){
        return true ;
    }
    
    if(k < arr[ mid]){
    return binarySearch(arr , s , mid-1 , k);
    }
    else{
        return binarySearch(arr , mid+1 , e, k);
    }
}

int main(){
   int arr[8]={4,6,8,14,15,18,35,38};
    int key =35;
    int e= 8;
    int s=0;
    bool ans= binarySearch(arr , s, e , key );
    if(ans){
        cout<<"Element is found"<<endl;

    }
    else{
        cout<<"Element is not found"<<endl;
    }
    return 0;

}