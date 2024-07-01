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
  int peek(){
    if(top>= 0){
        return arr[top];
        
    }
    {
        cout<<"Stack underFlow "<<endl;
        return -1;
    }
  }
};

int main(){
  stack st(10) ;
  st.push(5);
  cout<< st.peek();
  st.push(8);
  st.push(6);
  st.push(3);
 cout<< st.peek()<<endl;
  st.pop();
 cout<< st.peek();
  return 0;
}