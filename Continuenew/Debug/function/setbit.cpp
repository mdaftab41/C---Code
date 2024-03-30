# include <iostream>
using namespace std;

int setbit (int n ){
     int count=0;
     while(n!=0){
       if(n&1){
        count++;
       }
        n=n>>1;
      
     }
     return count;
}

 

int main(){
  int a,b;
  cout<<"Enter the value of a,b";
  cin>>a>>b;
  int ans1=setbit(a);
  int ans2=setbit(b);
  cout<<"setbit count is"<<(ans1+ans2)<<endl;
  return 0;

}
