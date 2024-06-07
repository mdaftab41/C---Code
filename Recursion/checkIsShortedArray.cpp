# include <iostream>
using namespace std;
bool isShorted(int arr[] , int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]<arr[1]){
        return false;
    }
    else{
        
        bool remainingPart = isShorted(arr+1, size-1);
            return remainingPart;
        
    }
}


int main(){
    int arr[3] ={1,5,6};
    int n=3;
    bool ans =isShorted(arr , n);
    if(ans){
        cout<< "array is Shorted"<<endl;
    }
    else{
        cout<<"Array is not shorted "<<endl;
    }

 return 0;

}