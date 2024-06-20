#include <iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* next;
    // constructor
    Node(int data){
        this->data=data;
        this->next= NULL;
    }
    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void InsertionAtFirst(Node*&head,int data){
    
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
    
}

void InsertionAtLast(  Node* &head ,int data ){
    Node* tail = head ;
    Node* lastNode= new Node(data);
     if (head == nullptr) {
        // If the list is empty, the new node becomes the head
        head = lastNode;
    }
    while(tail->next!=NULL){
        tail=tail->next;
    }
   tail->next=lastNode;
   
}

void print(Node* &head){ 
    while(head!=NULL){
        cout<<head->data <<" ";
        head=head->next;
    }

}

int main(){
    Node* node1 = new Node(10);
    Node *head=node1;
    InsertionAtFirst(head,20);
    InsertionAtFirst(head,30);
    InsertionAtFirst(head,40);
    InsertionAtFirst(head,50);
    InsertionAtLast(head , 60);
    InsertionAtLast(head , 70);
    InsertionAtLast(head , 80);

    print(head);



    return 0;
}