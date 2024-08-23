 #include <iostream>
using namespace std;

int getMAX( int num[], int n){
    int max=INT_MIN;//min valu of integer
    for( int i=0; i<n; i++){
        if(  num[i]> max){
            max = num[i];
        }
    }
    return max;
}

int getMIN( int num[], int n){
    int min=INT_MAX;//max valu of integer
    for( int i=0; i<n; i++){
        if(  num[i]< min){
            min = num[i];
        }
    }
    return min;
}

int main(){
    int size; 
    cin>> size;
    int num[size];
    for( int i=0; i<size; i++){
         cin>> num[i];
    }
    cout<<"MAx of array"<<getMAX(num,size)<<endl;
    cout<<"Min of array"<<getMIN(num,size)<<endl;
    return 0;
}
