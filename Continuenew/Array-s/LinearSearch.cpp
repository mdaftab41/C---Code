#include <iostream>
using namespace std;

bool search(int array[] , int n,int key){
    for(int i=0; i<n;i++){
        if(array[i]==key){
            return 1;
        }

    }
    return 0;
}

int main(){
    int array[13]={2,-5,5,-2,6,4,7,8,9,0,1,3,-3};
    int key;
    cout<<"Enter the key element you want to find"<<endl;
    cin>>key;
    bool found = search(array,13,key);
    if(found){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"key element is not found"<<endl;
    }
    return 0;
}