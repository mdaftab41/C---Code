# include <iostream>
using namespace std;

void counting (int n ){
    cout<<" counting is";
     for( int i=1; i<=n; i++){
        cout <<"  "<<i;
        }
     cout<<endl;
}

 

int main(){
  int n;
  cout<<"Enter the value of n";
  cin >>n;
  counting (n);
  return 0;

}
