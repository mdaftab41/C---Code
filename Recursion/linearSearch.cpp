# include <iostream>
using namespace std;
bool binarySearch( int arr[], int size , int key ){
    if(size == 0)
    return false ;

    if( arr[0] == key){ 
        return true ;
    }
    bool Remaining = binarySearch(arr+1 , size-1 , key);
    return Remaining ;
}


 int main() {
    int arr[8]={4,5,2,4,2,6,7,8};
    int key = 5;
    int n= 8;
    bool ans = binarySearch(arr, n , key);
    if(ans){
        cout<<" Element found"<<endl;
    }
    else
    {
     cout<<"Element not found"<<endl ;
    }



    return 0;
}

 

