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
void InsertionAtLast(Node* &head ,int data){
    Node* tail=head;
    Node* temp =new Node(data);
    if(temp==nullptr){
        tail = temp;
        head =temp;
    }
    while (tail->next != nullptr) {
            tail = tail->next;
        }
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
     
}
// insertion At any position
void InsertionAtAnyPos(Node*& head , int pos , int data){
    Node* newNode = new Node(data);
    Node* temp = head ;
    if(head==nullptr){
        head=newNode;
        return ;
    }
    
    if( pos > 1 && temp!=nullptr){
        temp=temp->next ;
        pos--;
    }
    if(temp==nullptr){
        cout<<"position is outside the boundery"<<endl;
    }
}

 

int main(){
    Node* node1=new Node(40);
    Node* head=node1;
    InsertionAtFirst(head ,30);
    InsertionAtFirst(head ,20);
    InsertionAtFirst(head ,10);
    InsertionAtLast(head , 50);
    print(head);
    
    

    return 0;
}