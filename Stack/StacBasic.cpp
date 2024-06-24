#include<iostream>
#include<stack>
using namespace std;

int main( ) {
    stack <int>ans;
    ans.push(10);
    ans.push(8);
    ans.push(4);
    ans.push(7);
    ans.push(9);
    ans.push(15);
    ans.push(14);
    int k=ans.top();
    ans.pop();
    cout<<"Printing the top element of Stack : "<<k <<endl;
    cout<<"printing the next top Element : "<<ans.top()<<endl;
    ans.pop();
     cout<<"printig the top element "<<ans.top() <<endl;
    ans.pop();
     cout<<"printig the top element "<<ans.top() <<endl;
    ans.pop();
     cout<<"printig the top element "<<ans.top() <<endl;
    // ans.pop();
    // ans.pop();
    // ans.pop();
    // ans.pop();
    if( ans.empty()){
        cout<<"Stack is Empty "<<endl;
    }
    else{
        cout<<"Stack is not Empty" <<endl;
    }
    cout<<"printig the top element "<<ans.top() <<endl;
     

    ans.pop();
     cout<<"printig the top element "<<ans.top() <<endl;
    ans.pop();
    cout<<"printig the top element "<<ans.top() <<endl;
    if(ans.empty()){
        cout<<"Stack is Empty "<<endl;
    }
    else{
        cout<<"Stack is not Empty" <<endl;
    }
     ans.pop();
    
     if(ans.empty()){
        cout<<"Stack is Empty "<<endl;
    }
    else{
        cout<<"Stack is not Empty" <<endl;
    }
    
    return 0;
}