#include<iostream>
using namespace std;

// creating node class
class Node{
    public:
    int data;
    Node* prev ;
    Node* next ;
    Node(int data){
        this->data=data;
        this->prev=nullptr;
        this->next=nullptr;
    }
};

// function to travels the node or print the node
void print(Node*&head){
    Node* temp=head;
 while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
 }
 cout << endl;
}
//Insertion At first Position
void InsertionAtFirst(Node*&head ,int data){
    Node* temp =new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

// Insertion at last position

 

int main(){
    Node* node1=new Node(40);
    Node* head=node1;
    InsertionAtFirst(head ,30);
    InsertionAtFirst(head ,20);
    InsertionAtFirst(head ,10);
    print(head);
    
    

    return 0;
}