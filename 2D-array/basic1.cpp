#include <iostream>
using namespace std;
int main(){
    int arr[3][4]={{2,3,4,5},{9,8,7,6},{6,7,8,9}};
    for(int i=0 ;i<3 ;i++){
        for(int j=0 ;j<4 ;j++){
            cout<<arr[i][j]<<" " ;
        }
        cout<<endl ;
    }
    return 0 ;
}