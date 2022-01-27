#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    //node constrcutor
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    
    ~Node(){
        int val=this->data;
        while(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data "<<val<<endl;
    }
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int countNodes(Node* &head){
    int ct=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        ct++;
    }
    return ct;
}
void insertAtHead(Node* &head,Node* &tail,int d){

    //empty list
    if(head==NULL){
        Node* firstNode=new Node(d);
        head=firstNode;
        tail=firstNode;
    }
    else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;

        head=temp;
    }

}

void insertAtTail(Node* &head,Node* &tail,int d){

    //empty list
    if(tail==NULL){
        Node* t=new Node(d);
        head=t;
        tail=t;
    }
    else{
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;

        tail=temp;
    }

}

void insertAtPosition(Node* &head,Node* &tail,int pos,int d){
    
    
    //invalid position
    int len=countNodes(head);
    if(pos > len+1){
        cout<<"Invalid position"<<endl;
        return;
    }

    //insert at first position
    if(pos==1){
        insertAtHead(head,tail,d);
        return;
    }

    Node* temp=head;
    int ct=1;
    while(ct < pos-1){
        temp=temp->next;
        ct++;
    }

    //insert at last position
    while(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }

    Node* newNode=new Node(d);
    //last Two links
    newNode->next=temp->next;
    temp->next->prev=newNode;

    //first Two links
    temp->next=newNode;
    newNode->prev=temp;

}
void deleteNode(Node* &head,int pos){

    //deleting first node
   if(pos==1){
       Node* temp=head;

       temp->next->prev=NULL;
       head=head->next;
       temp->next=NULL;
       delete temp;
   }

   //deleting any node/last node
   else{
       Node* curr=head;
       Node* prev=NULL;

       int ct=1;
       while(ct < pos){
           prev=curr;
           curr=curr->next;
           ct++;
       }
       
       prev->next=curr->next;
       curr->prev=NULL;
       curr->next=NULL;

       delete curr;
   }
}

int main(){
    Node* firstNode=new Node(10);
    Node* head=firstNode;
    Node* tail=firstNode;
    print(head);

    insertAtHead(head,tail,5);
    print(head);

    insertAtTail(head,tail,15);
    print(head);

    cout<<"number of nodes "<<countNodes(head)<<endl;

    insertAtPosition(head,tail,2,8);
    print(head);

    deleteNode(head,1);
    print(head);

    deleteNode(head,2);
    print(head);

    insertAtTail(head,tail,20);
    print(head);

    deleteNode(head,3);
    print(head);


    deleteNode(head,1);
    print(head);
    
}
