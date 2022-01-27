#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destrcutor
    ~Node(){
        int val=this->data;
        while(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<val<<endl;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* t=head;
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
int countNodes(Node* &head){
    int ct=0;
    Node* t=head;
    while(t!=NULL){
        ct++;
        t=t->next;
    }
    return ct;
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
        insertAtHead(head,d);
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
        insertAtTail(tail,d);
        return;
    }

    Node* newNode=new Node(d);
    newNode->next=temp->next;
    temp->next=newNode;

}

void deleteNode(Node* &head,int pos){

    //deleting first node
   if(pos==1){
       Node* temp=head;
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
       curr->next=NULL;

       delete curr;
   }
}
int main(){

    //creating first node
    Node* node1=new Node(10);
    Node* head=node1; //first node as head
    Node* tail=node1; //first node as tail

    print(head);

    insertAtTail(tail,20);
    insertAtHead(head,5);
    print(head);

    //count the number of nodes
    cout<<"Number of nodes "<<countNodes(head)<<endl;
    insertAtPosition(head,tail,1,1);
    print(head);

    //insert at position 4
    insertAtPosition(head,tail,4,15);
    print(head);

    insertAtPosition(head,tail,6,25);
    print(head);
    cout<<countNodes(head)<<endl;

    insertAtPosition(head,tail,8,30);
    print(head);

    cout<<"FirstNode "<<head->data<<endl;
    cout<<"LastNode "<<tail->data<<endl;

    //node delete by position
    print(head);
    deleteNode(head,3);
    print(head);

    //first node delete
    deleteNode(head,1);
    print(head);

    //last node delete
    deleteNode(head,4);
    print(head);


}
