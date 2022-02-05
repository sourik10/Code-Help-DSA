/*
class Node{
  int data;
  Node* next;
  
  Node(int data){
    this->data=data;
    this->next=NULL;
  }
}
*/

bool isCircular(Node* head){
    
    //no element 
    if(head==NULL){
        return NULL;
    }
    
    //single element(non-circular)
    if(head->next==NULL ){
        return false;
    }
    
    //more than 1 element
    Node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==NULL){
        return false;
    }
    if(temp==head){
        return true;
    }
}
