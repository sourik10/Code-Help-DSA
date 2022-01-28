#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //node constrcutor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int val=this->data;
        while(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free with data "<<val<<endl;
    }
};
void insertNode(Node* &tail,int element,int d){

    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non-empty list
      //assuming element is present in the list  
      Node* curr=tail;
      while(curr->data!=element){
          curr=curr->next;
      }

      Node*temp=new Node(d);
      temp->next=curr->next;
      curr->next=temp;
    }
}
void print(Node*&tail){
    Node* temp=tail;
    if(tail==NULL){
        cout<<"No element is present in the list"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(temp!=tail);

    cout<<endl;
}
void deleteNode(Node* &tail,int val){

    //empty list
    if(tail==NULL){
        cout<<"No element to delete"<<endl;
        return;
    }
    //non-empty list
    Node* prev=tail;
    Node* curr=prev->next;

    while(curr->data!=val){
        prev=curr;
        curr=curr->next;
    }

    prev->next=curr->next;

    //if only 1 Node prev==curr
    if(curr==prev){
        tail=NULL;
    }
    
    //more than 2 nodes
    if(tail==curr){
        tail=prev;
    }

    curr->next=NULL;
    delete curr;

}
int main(){
    Node* tail=NULL;
    print(tail); 

    insertNode(tail,1,10);
    print(tail);
    insertNode(tail,10,20);
    print(tail);
    insertNode(tail,20,30);
    print(tail);
    insertNode(tail,30,40);
    print(tail);

    deleteNode(tail,30);
    print(tail);

}
