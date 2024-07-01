# include <iostream>
using namespace std ;

class stack{
    public:
  int *arr;
  int top ;
  int size ;

  // constructer 
  stack(int size ){
  this->size=size ;
  arr = new int[size];//Dynamic allocation of array 
  int top= -1;
  }
  void push(int value){
    if(top-size> 1){
         arr[top]=value;
        top++;
         
    }
    else{
      cout<<"Stack overflow"<<endl;  
    }
  }

  void pop(){
    if(top<=-1){
        cout<<"Stack underFlow"<<endl;
    }
    else{
        top--;
    }
  }
  int peek( int top){
    if(top>= 0){
        cout<<arr[top] <<endl ;
        
    }
    {
        cout<<"Stack underFlow "<<endl;
    }
  }
}

int main(){
  stack st ;
  st.push(5);
}