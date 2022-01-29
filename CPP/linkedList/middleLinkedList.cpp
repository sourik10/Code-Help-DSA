//time O(n) 

int getLength(Node* &head){
    if(head==NULL){
        return 0;
    }
    Node* temp=head;
    int ct=0;
    while(temp!=NULL){
        temp=temp->next;
        ct++;
    }
    return ct;
}

Node *findMiddle(Node *head) {
    int ans=getLength(head);
    ans=ans/2;
    Node* temp=head;
    while(ans--){
        temp=temp->next;
    }
    return temp;
}
