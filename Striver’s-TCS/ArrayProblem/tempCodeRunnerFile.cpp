int main(){
int n ;
cout<<"Enter the size"<<endl;
cin>>n ;
int arr[n] ;
for( int i=0 ; i<n ; i++){
    cin>>arr[i];
}
print(arr , n) ;
int unique=findUnique(arr , n) ;
cout<<"unique no is : "<<unique<<endl;
    return 0 ;
}