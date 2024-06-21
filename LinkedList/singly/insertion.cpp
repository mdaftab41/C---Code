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

//function to insert the node at first position 

void InsertionAtFirst(Node*&head,int data){
    
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
    
}


//function to insert the node at any position 

void InsertionAtPos( Node*&head , int pos , int data){
  Node* posNode = new Node(data);
  Node* temp= head;
  if(pos==1){
    temp->next=head;
    head=temp;
    return ;
  }
  int cnt =1;
  while(cnt != pos-1 && temp != NULL){
    temp=temp->next;
    cnt++;

  }
  if(temp==NULL){
    cout << "Position is out of bounds to add node" << endl;
        delete posNode; // Clean up memory if position is invalid
        return;
  }
   posNode->next=temp->next;
  temp->next =posNode;
  
}


//function to insert hte node at Last position 

void InsertionAtLast(  Node* &head ,int data ){
    Node* tail = head ;
    Node* lastNode= new Node(data);
     if (head == NULL) {
        // If the list is empty, the new node becomes the head
        head = lastNode;
    }
    while(tail->next!=NULL){
        tail=tail->next;
    }
   tail->next=lastNode;
   
}

 

// function to print hte node or travel the node node

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
    InsertionAtPos(head ,11 ,90);
    

    print(head);



    return 0;
}