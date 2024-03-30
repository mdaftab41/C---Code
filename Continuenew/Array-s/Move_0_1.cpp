#include <iostream>
using namespace std;

void printA( int arr[], int n){
    for( int i=0; i<n; i++){
      cout<<arr[i]<<" "<<endl;
    }
}



void sortOne( int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==i){
            j--;
        }
         
            swap(arr[i], arr[j]);
            i++;
            j--;
        
    }
}

int main(){
     
    int arr[10]={0,1,0,1,0,1,1,0,0,1};
    //sortOne(arr,10);
    printA(arr,10);
    return 0;

}

