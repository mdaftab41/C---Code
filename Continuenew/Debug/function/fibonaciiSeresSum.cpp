# include <iostream>
using namespace std;
//Even--->1
//odd --->0
int fibSum(int a){
     int first=0,second=1,third;
     int sum=1;
     for( int i=2;i<a;i++){//swaping 
        third=first+second;
        first=second;
        second=third;
        sum=sum+third;
     }
    return sum; 
}

int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int ans=fibSum(num) ;
    cout<<ans;

}