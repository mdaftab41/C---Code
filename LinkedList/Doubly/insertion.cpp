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
     ~Node() {
        int value = this -> data;
        //memory free
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
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
    

    if (pos == 1) {
        // If inserting at the head
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }
    Node* temp = head ;
    while( pos >2 && temp!=NULL){
        temp=temp->next ;
        pos--;
    }
    if(temp==nullptr){
        cout<< "position is outside the boundery"<<endl;
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != nullptr) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;

}

// function to delete the node 
void DeleteNode(Node*&head , int pos){
    if(head == NULL){
        cout<<"No Node is Present in the LinkedList"<<endl;
        return;
    }
    Node* current =head;
    Node* previous = head;
    int cnt = 1;
    if(pos == 1){
        current = current->next;
        head = current;
        current->prev = NULL;
        return ;

    }
    
    while(cnt < pos && current != NULL){
            previous = current ;
            current= current->next;
            cnt++;
        }
        if(current == NULL){
            cout<<"Position is outside the boundery"<<endl ;
            return ;
        }
        if(current->next == NULL){
            previous->next=current->next ;
            current->prev=NULL ;
            delete current;
            return;
        }
        previous->next=current->next ;
        current->next->prev = previous ;
        current->next =NULL ;
        current->prev =NULL ;
        delete current ;
    
}
 

int main(){
    Node* node1=new Node(40);
    Node* head=node1;
    InsertionAtFirst(head ,30);
    InsertionAtFirst(head ,20);
    InsertionAtFirst(head ,10);
    InsertionAtLast(head , 50);
    InsertionAtAnyPos(head,7,60);
    print(head);
    DeleteNode(head , 5);
      print(head);
     DeleteNode(head , 1);
       print(head);
     DeleteNode(head , 2);
    print(head);
    
    

    return 0;
}