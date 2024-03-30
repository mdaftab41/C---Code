#include <iostream>
using namespace std;

int firstOcc( int arr[], int key, int n){
    int s=0, e=n-1;
    int mid= s+(e-s)/2;
    int ans= -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key< arr[mid]){
           e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
int lastOcc( int arr[],int key,int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while (s<=e)
    {
         if(arr[mid]==key){
            ans=mid;
            s=mid+1;
         }
         else if(arr[mid]<key){
            s=mid+1;
         }
         else if(arr[mid]>key){
            e=mid-1;
         }

       mid= s+(e-s)/2;
    }
    return ans;
    
}

int main(){
    int odd[9]={1,2,3,3,5,6,6,6,6};
  cout<< "first occurance of 6 is : "<<firstOcc(odd,6,9)<<endl;
  cout<< "last occurance of 6 is : "<<lastOcc(odd,6,9);
}
