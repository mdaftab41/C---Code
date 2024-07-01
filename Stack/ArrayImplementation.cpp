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
}

int main(){
  
}