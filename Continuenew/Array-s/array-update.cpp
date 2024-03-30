 #include <iostream>
using namespace std;

void update( int array[] ,int n){
    cout<<"printing inside the function "<<endl;
    array[0]=120;
    for( int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }

    cout<<endl<<"Going out side the function"<<endl;
}
int main(){
    int array[4]={2,4,5,6};
    update(array,4);
    cout<<"printing main function array"<<endl;
    cout<<"chance  refelected back in main function"<<endl;
    for(int i=0; i<4; i++){
        cout<<array[i] <<"  ";
    }
  return 0;
}