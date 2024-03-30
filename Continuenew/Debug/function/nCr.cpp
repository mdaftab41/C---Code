# include <iostream>
using namespace std;

int fact (int n){
    int fact=1;//in case of zero fact return zero
    for(int i =1; i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r){
    int num=fact(n);
    int demo =fact(r)*fact(n-r);
    int result =(num/demo);
    return result;
}

int main(){
 int n,r;
 cout<<" Enter the value of n ,r"<<""<<endl;
 cin >> n >> r;
 int ans= nCr (n,r);
 cout<<"Answer is" <<"  "<<ans;
 return 0;

}
