# include <iostream>
using namespace std;

void Alternate( int arr[],int n){
    int start=0;
    int end=1;
    while(end<n-1){
        swap(arr[start],arr[end]);
        start+=2;
        end+=2;
    }
}

void printArray( int array[], int n){
    cout<<"print Array After Swaping"<<endl;
    for(int i=0; i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<"endl";
}

int main(){
    int array[9]={2,4,5,6,3,8,5,9,0};
     int arr[8]={2,4,6,3,8,5,9,0};
     Alternate(array,9);
     Alternate(arr,8);
     printArray(array,9);
     printArray(arr,8);

     return 0;
}
